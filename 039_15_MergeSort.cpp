#include<iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first= new int[l1];
    int *second=new int[l2];
    for( int i=0; i!=l1;i++)
    {
        first[i]=arr[s+i];
    }
    for(int i =0 ; i!=l2;i++)
    {
        second[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=s;
    while(i<l1 && j<l2)
    {
        if(first[i]>second[j])
            arr[k++]=second[j++];
        else
            arr[k++]=first[i++];
    }
    while(i<l1)
    {
        arr[k++]=first[i++];
    }
    while(j<l2)
    {
        arr[k++]=second[j++];
    }
}
void mergeSort(int *arr,int s,int e){
    if(s>=e)
        return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[6]={ 6,2,4,1,3,5};
    mergeSort(arr,0,5);
    for(int i=0;i!=6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
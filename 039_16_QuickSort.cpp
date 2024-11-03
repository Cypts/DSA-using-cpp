#include<iostream>
using namespace std;
int partition(int * arr, int s, int e)
{
    int pivot=arr[s];
    int i=s+1,j=e;
    while(i<=j)
    {   while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[i-1],arr[s]);
    return i-1;
}
void quickSort(int * arr,int s, int e)
{
    if(s>=e)
        return;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[6]={3,8,4,2,1,5};
    quickSort(arr,0,5);
    for(int i=0 ; i!=6;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}  

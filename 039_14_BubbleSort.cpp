#include<iostream>
using namespace std;
void Bubble(int (&arr)[4],int size)
{
    if(size==1)
        return;
    for( int j=0; j!=size; j++)
    {if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);}
    Bubble(arr,size-1);
}
int main()
{
    int arr[4]={1,5,4,3};
    Bubble(arr,4);
    for( int i =0 ;i != 4;i++)
    {
        cout<<arr[i]<<" ";
    }
}
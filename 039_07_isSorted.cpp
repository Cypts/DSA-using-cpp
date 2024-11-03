#include<iostream>
using namespace std;
bool isSorted(int *arr)
{   int size=sizeof(arr)/sizeof(int);

    int i =0;
    if(i<size)
    {
    if(arr[i]>arr[i+1])
        return false;
    i++;
    isSorted(arr+i);}
    return true;
    
}
int main()
{
    int arr[5]={1,2,3,9};
    cout<<isSorted(arr);
}
#include<iostream>
using namespace std;
bool BinarySearch(int *arr,int size,int key)
{   
    int mid=(size)/2;
    if(arr[mid]==key)
        return true;
    if(mid==0 )
        return false;
    if(key>arr[mid])
        return BinarySearch(arr+mid+1,size-mid-1,key);
    if(key<arr[mid])
        return BinarySearch(arr,size-mid,key);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key =10;
    int ans = BinarySearch(arr,10,key);
    if(ans)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}

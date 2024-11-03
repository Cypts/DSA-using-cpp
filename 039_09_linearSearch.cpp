#include<iostream>
using namespace std;
bool linearSearch(int *arr,int size,int key)
{
    if(key==arr[0])
        return true;
    if(size==0)
        return false;
    linearSearch(arr+1,size-1,key);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int key=1;
    int ans=linearSearch(arr,5,key);
    if(ans)
        cout<<"Found";
    else
        cout<<"Not found";
}
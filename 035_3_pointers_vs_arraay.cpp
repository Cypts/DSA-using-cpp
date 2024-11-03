#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,5,6,3,8};
    int *ptr=arr;
    cout<<*arr<<endl;//printing value at first location
    cout<<&arr[1]<<endl;//printing address of 2nd
    cout<<(ptr+1)<<endl;//printing address of 2nd
}
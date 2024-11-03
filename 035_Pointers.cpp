#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0]=1;
    arr[1]=5;
    cout<<"Address of first block is "<<arr;
    cout<<endl<<"Address of first block is "<<&arr[0];
    cout<<endl<<"using * arr +1 "<<* arr+1;
    cout<<endl<<"First element if array is "<<arr[0];
    cout<<endl<<"*(arr+1) "<<*(arr+1);
    int i =0;
    cout<<endl<<"checking "<<i[arr];

}
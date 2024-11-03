#include<iostream>
using namespace std;
int Sum(int *arr,int size)
{
    if(size==1)
        return arr[0];
    int sum;
    sum=arr[0]+Sum(arr+1,size-1);
    return sum;

}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    cout<<"Sum= "<<Sum(arr,6);
}
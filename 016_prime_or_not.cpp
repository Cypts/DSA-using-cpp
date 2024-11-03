#include<iostream>
using namespace std;
int main()
{
    int a,flag=0;
    cin>>a;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            flag=1;
        
    }
    if(flag==0)
        cout<<"number is prime";
    else
        cout<<"number is not prime;";
}
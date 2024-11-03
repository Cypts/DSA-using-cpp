#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    bool flag=false;
    cin>>n;
    if(n==1)
        cout<<"number is prime";
    else
    {    while(i!=n/2+1)
        {
            if(n%i==0)
                flag=true;
            i++;
        }
        if(flag==true)
            cout<<"numbwer is not prime";
        else
            cout<<"number is prime";}
}
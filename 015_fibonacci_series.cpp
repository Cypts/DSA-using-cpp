#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int n;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++)
    {   int temp=a;
        cout<<a+b<<endl;
        a=b;
        b=temp+b;
    }
}
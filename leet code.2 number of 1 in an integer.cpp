#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    while(a!=0)
    {
        int r =a%10;
        if(r&1)
           { count++;}
        a=a/10;
    }
    cout<<count;
}
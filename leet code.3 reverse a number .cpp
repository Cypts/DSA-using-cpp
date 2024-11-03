#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i=0;
    int number=0;
    int temp=a;
    while(temp!=0)
        {temp=temp/10;
        i++;}
    while(a!=0)
    {
        int r=a%10;
        number=number+r*pow(10,--i);
        a/=10;
    }
    cout<<number;
}
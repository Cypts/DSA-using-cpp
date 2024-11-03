#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int num[32]={1,1,0};
    int decimal=0,k=0;
     int p=1;
    for(int i=3-1;i>=0;i--)
    {
       
        if(k!=0)
            p=p*2;
        
        int a=num[i];
        cout<<num[i]<<"*";
        int j=p*a;
        decimal+=j;
        k++;
        cout<<p<<"="<<(num[i])*p;
        cout<<endl;
    }
    cout<<decimal;
    
}
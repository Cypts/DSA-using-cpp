#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a[32];
    for(int i=0;i!=32;i++)
        a[i]=1;
    cin>>n;
    int bit,answer=0,i=0;
    
    if(n<0)
    {   i=1;
        n=n*(-1);
        while(n!=0)
        {
           bit=n&1;
           if(bit==1)
           {
            bit=0;
           }
           else{
            bit=1;
           }
            a[31-i]=bit;
            n=n>>1;
            i++;
        }
        
         
        
    }
    else{
        while(n!=0)
        {
           bit=n&1;
            answer+=bit*(pow(10,i));
            n=n>>1;
            i++;
        }
    }
    for(int i=0;i!=32;i++)
        cout<<a[i];
    
}
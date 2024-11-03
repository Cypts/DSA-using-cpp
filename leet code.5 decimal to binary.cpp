#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int number,a[32];
    // cin>>number;
    // first way
    // int i=0;
    // while(number!=0)
    // {
    //     if(number%2==0)
    //         a[i]=0;
    //     else 
    //         a[i]=1;
    //     i++;
    //     number/=2;
    // }
    // for(int j=i-1;j>=0;j--)
    //     cout<<a[j];
    //another way
    int n,bit,i=0,answer=0;
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        answer=answer+(bit * (pow(10,i)));
        n = n >>1  ;
        i++;
    }
    cout<<answer;
    
}

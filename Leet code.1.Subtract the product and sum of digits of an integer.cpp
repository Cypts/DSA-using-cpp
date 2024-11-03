#include<iostream>
using namespace std;
int main(){
    int a,sum=0,product=1;
    cin>>a;
    while(a!=0)
   {
    int r=a%10;
    sum+=r;
    product*=r;
    a/=10;
    }
    cout<<"Subratction of product and sum = "<<product-sum;

    
}
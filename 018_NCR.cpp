#include<iostream>
using namespace std;
int factorial(int x)
{   int fac;
    if(x==1||x==0)
        return 1;
    else
        fac=x*factorial(x-1);
            
    return fac;
}
int nCr(int x, int z)
{
    float ncr;
    ncr=( factorial(x))/(factorial(x-z)*factorial(z));
    return ncr;
}
int main()
{
    int n,r,ans;
    cout<<"Enter value of n and r repectively"<<endl;
    
    cin>>n>>r;
    cout<<"Your answer is = "<<nCr(n,r);

}
#include<iostream>
using namespace std;
void say_Dig(int n)
{
    if(n==0)
        return;
    int rem=n%10;
    string dig[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    say_Dig(n/10);
    cout<<dig[rem]<<" ";
}
int main()
{
    say_Dig(423);
}
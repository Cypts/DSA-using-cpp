#include<iostream>
using namespace std;
int Count(int n)
{
    if(n==0)
        return 0;
    else
        cout<<n<<" ";
        Count(n-1);
}
int main()
{
    Count(5);
}
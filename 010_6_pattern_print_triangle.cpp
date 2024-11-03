#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i!=n+1)
    {
        int j=i;
        while(j!=0)
        {
            cout<<j<<'\t';
            j--;
        }
        cout<<endl;
        i++;
    }
}
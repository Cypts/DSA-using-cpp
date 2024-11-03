#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i!=n+1)
    {
        int j=1;
        char k='A'+i-1;
        while(j!=n+1)
        {
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
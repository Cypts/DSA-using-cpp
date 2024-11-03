#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
     while(i!=n+1)
    {
        int j=1;
        while(j!=i+1)
        {
            char k='D'-i+j;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
}
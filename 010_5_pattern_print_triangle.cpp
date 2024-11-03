#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i!=n+1)
    {
        int k=1,j=1;
        while(k!=i+1)
        {
            cout<<j;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
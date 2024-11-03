#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    while(k!=n+1)
    {
        
        int j=1;
        while(j<k+1)
        {
            cout<<k;
            j++;
        }
        cout<<endl;
        k++;
    }
}
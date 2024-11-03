#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    int k=i;
    cin>>n;
    while(i!=n+1)
    {
        int j=n-i+1;
        int k=1;
        while(j!=0)
        {
            cout<<k<<'\t';
            k++;
            j--;
        }
        if(i!=1)
        {
            j=1;
            while(j!=i)
            {
                cout<<"*\t*\t";
                j++;
            }
        }
        j=n-i+1;
        
        while(j!=0)
        {
            cout<<j<<'\t';
            
            j--;
        }
        cout<<endl;
        i++;
    }
}
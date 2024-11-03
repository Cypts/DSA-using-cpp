#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i!=n+1)
    {
        int k=n-i;
        int j=1;
        while(k!=0)//printing space
        {
            cout<<" ";
            k--;
        }
        while(j!=i+1)//printing star
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
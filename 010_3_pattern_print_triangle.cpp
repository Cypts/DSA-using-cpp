#include<iostream>
using namespace std;
int main()
{
    int n,row=1,i=1;
    cin>>n;
    while(row!=n+1)
    {
        int k=1;
        while(k!=row+1)
        {
            cout<<i<<'\t';
            k++;
            i++;
        }
        cout<<endl;
        
        row++;
    }
}
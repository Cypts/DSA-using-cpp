#include<iostream>
using namespace std;
int main()
{
     int n,row=1,i=1;
    cin>>n;
    while(row!=n+1)
    {
        int k=1;
        int j=i;
        while(k!=row+1)
        {
            cout<<j<<'\t';
            k++;
            row++;
        }
        cout<<endl;
        i++;
        row=1;
        row++;
    } 
}
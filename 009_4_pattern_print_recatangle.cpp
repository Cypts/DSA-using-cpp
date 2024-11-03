#include<iostream>
using namespace std;
int main()
{
    int i =1,n;
    cin>>n;
    char k='A';
    while(i!=n+1)
    {
        int j=1;
        
        while(j!=n+1)
        {
            cout<<k;
            
            j++;
        }
        k=k+1;
        cout<<endl;
        i++;
    }
}
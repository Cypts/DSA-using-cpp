#include<iostream>
using namespace std;
int main()
{
    int i =1,n;
    cin>>n;
    
    while(i!=n+1)
    {
        int j=1;
        char k='A';
        while(j!=n+1)
        {
            cout<<k;
            k=k+1;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}
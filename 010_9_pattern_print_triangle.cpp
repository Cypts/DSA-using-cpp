#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    char k='A';
     while(i!=n+1)
    {
        int j=1;
     
        while(j!=i+1)
        {
            
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
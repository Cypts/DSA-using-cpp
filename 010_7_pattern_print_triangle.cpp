#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    //1st methord
    /*char k='A';
    while(i!=n+1)
    {
        int j=1;
        while(j!=i+1)
        {
            cout<<k;
            j++;
        }
        cout<<endl;
        k++;
        i++;
    }*/
    //2nd methord
    while(i!=n+1)
    {
        int j=1;
        while(j!=i+1)
        {
            char k='A'+i-1;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
}
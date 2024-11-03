#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cin>>n;
    while(i!=n+1)
    {
        //declaring space
        int space=i-1;
        while(space!=0)
        {
            cout<<" ";
            space--;
        }
        int j=n-i+1;
        while(j!=0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}
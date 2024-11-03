#include<iostream>
using namespace std;
int main()
{
    int k=1,a=1;
    int n;
    cin>>n;
    while(a<n+1)
    {
        int i=1;
        while(i<k+1)
        {
            cout<<"*";
            i++;
        }
        cout<<endl;
        k++;
        a++;
    }
}

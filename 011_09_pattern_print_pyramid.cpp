#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    int k=i;
    cin>>n;
    while(i!=n+1)
    {
        //adding space
        int space=n-i;
        while(space!=0)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j!=k+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        k+=2;
        i++;
    }
}
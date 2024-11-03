#include<iostream>
using namespace std;
int main()
{
    int i=1,k=1;
    int n;
    cin>>n;
    while(i!=n+1)
    {
        //declaring space
        int space=n-i;
        while(space!=0)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j!=i+1)
        {
            cout<<k;
            j++;
        }
        k++;
        cout<<endl;
        i++;
    }
}
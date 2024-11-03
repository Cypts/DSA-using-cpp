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
        int l=0;
        while(j!=k+1)
        {
             int p=j-2-(l*1);
            if(j<i||j==i)
                cout<<j;
            else
                 {cout<<p;
                 l=l+2;
                }
            j++;
        }
        cout<<endl;
        k+=2;
        i++;
    }
}
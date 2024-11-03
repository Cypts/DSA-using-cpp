#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int i=1;
    while(i<r+1)
    {   
        int j=1;
        while(j<c+1)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}
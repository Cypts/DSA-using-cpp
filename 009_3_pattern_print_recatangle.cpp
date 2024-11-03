#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int i=1;
    int j=1;
    while(i<r+1)
    {   
        int k=1;
        while(k<c+1)
        {
            cout<<j<<'\t';
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}
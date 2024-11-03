#include<iostream>
using namespace std;
int main()
{
    int m=1,i,j;
    cin>>i>>j;
   while(m<j+1)
   {    int n=1;
        while(n<i+1)
        {
            cout<<"*";
            n++;
        }
        cout<<endl;
        m++;
    }

}
#include<iostream>
using namespace std;
int main()
{
    int number,power;
    cin>>number>>power;
    int temp=1;
    for(int i=1;i!=power+1;i++)
        temp=number*temp;
    cout<<temp;    
}
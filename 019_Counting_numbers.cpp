#include<iostream>
using namespace std;
void counting(int x)
{   int i=1;
    while(i!=x+1)
    {cout<<i<<endl;
    i++;}
}
int main()
{
    int number;
    cout<<"Enter your number"<<endl;
    cin>>number;
    counting(number);
}
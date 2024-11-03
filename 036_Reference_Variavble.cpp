#include<iostream>
using namespace std;
int main()
{
    int i =5;
    int &j = i;
    cout<<j;
    cout<<endl<<i;
    j++;
    cout<<endl<<i;

}
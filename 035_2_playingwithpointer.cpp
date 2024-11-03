#include<iostream>
using namespace std;
int main()
{
    int a= 5;
    int *p;
    p=&a;
    cout<<"Address of a "<< &a<<endl;
    cout<<"Printing p "<<p<<endl;
    cout<<"Value at a "<<a<<endl;
    cout<<"Printing *p "<<*p;    
}
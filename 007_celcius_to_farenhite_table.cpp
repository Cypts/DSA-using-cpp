#include<iostream>
using namespace std;
int main()
{
    int c=-44;
    float f;
    while(c!=101)
    {
        f=(9.0/5.0)*c+32;
        cout<<c<<" degree celsius is equal to "<<f<<" degree farenhite"<<endl;
        c++;
    }
}
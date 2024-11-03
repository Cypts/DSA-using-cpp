#include<iostream>
using namespace std;
int main()
{
    //for loop without intialization
    // int a=1;
    // for(;a<11;a++)
    // {
    //     cout<<a<<endl;
    // }
    //FOR loop without intialization and updation
    //  int a=1;
    // for(;a<11;)
    // {
    //     cout<<a<<endl;
    //     a++;
    // }
    //for loop without intializtion, condition, updation
    int a=1;
    for(;;)
    {   
        if(a<11)
        {cout<<a<<endl;}
        else
            break;
        a++;
    }
}
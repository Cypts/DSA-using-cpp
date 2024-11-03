#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;;
    if((a<='0')&&(a>='9'))
    {
        cout<<" is a number"<<endl;
    }
    else if((a<='A')&&(a>='Z'))
    { 
        cout<<" is a capital letter"<<endl;
    }
    else if((a<='a')&&(a>='z'))
    {
        cout<<" is a smaller letter"<<endl;
    }
    else{cout<<"error";}
}
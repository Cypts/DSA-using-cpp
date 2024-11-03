#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num;
    
    
    while(true)
    {
        cout<<"Enter the number"<<endl;
        int a,b;
        cin>>a>>b;
        cout<<"Enter your choice"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multipication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>num;
        switch(num){
            case 1:
                cout<<a+b<<endl;
                break;
            case 2:
                cout<<a-b;
                break;
            case 3:
                cout<<a*b;
                break;
            case 4:
                cout<<a/b;
                break;
            case 5:
                 exit('a');
        }
        cout<<"this is inside loop"<<endl;
    }
    cout<<"this is outside loop";
}
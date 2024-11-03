#include<iostream>
using namespace std;
class stack{
    public:
        int size;
        int *array;
        int top;

    stack(int size)
    {
        this -> size=size;
        array= new int[size];
        top= -1;
    }
    void push(int element)
    {
        if((size-top)>1){
            top++;
            array[top]=element;
        }
        else
            cout<<"Array is overflow";
    }
    void pop()
    {
        if(top>=0)
            top--;
        else
            cout<<"\nStack is underflow";
    }
    int peek( )
    {   if(top>=0)
            return array[top];
        else
            cout<<"\nstack is empty";
            return -1;
    }
    int isEmpty()
    {
        if(top==(-1))
            return true;
        else
            return false;
    }
    
};
int main()
{
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"1st peek element is "<<s.peek();
    s.pop();
    s.pop();
    s.pop();
    cout<<"\n2nd peek element is "<<s.peek();
    if(s.isEmpty()==true)
        cout<<"\nStack is empty";
    else
        cout<<"\nStack is Not empty";
}
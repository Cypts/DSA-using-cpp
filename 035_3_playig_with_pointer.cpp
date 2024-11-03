#include<iostream>
using namespace std;
void update(int **p)
{
    *p=*p+1;
}
int main()
{
    int i =5;
    int * p= &i;
    int **p2=&p;
    cout<<"Before:";
    cout<<endl<<"p:"<<p<<"\t*p "<<*p;
    update(p2);
    cout<<endl<<"After: "<<endl<<"p: "<<p<<"\t*p: "<<*p;

}
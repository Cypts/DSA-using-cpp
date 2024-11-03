#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(int);
      cout<<"Your array is ";
    for(int i= 0;i!=size;i++)
    {
        cout<<array[i]<<" ";
    }
    int position,element;
    cout<<"\nEnter element and position respectively ";
    cin>>element>>position;
    for(int i= size+1;i!=position-1;i--)
    {
        array[i]=array[i-1];
    }
    array[position-1]=element;
    cout<<"Array after insertion is = ";
    for(int i=0;i!=size+1;i++)
    {
        cout<<array[i]<<" ";
    }
    }

#include<iostream>
using namespace std;
void print_array(int array[],int size)
{
    for(int i=0;i!=size;i++)
    {
        cout<<array[i]<<" ";
    }
}
void swap_alternate(int array[], int x)
{
    for(int i=0;i!=x;i+=2)
    {
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
}
int main()
{
    int array[]={1,2,3,4,5,6,7};
    int size=sizeof(array)/sizeof(int);
    cout<<"Array before operation ";
    print_array(array,size);
    int x=size;
    if(size%2!=0)
        x=size-1;
    cout<<"\nArray after operation ";
    print_array(array,size);
}
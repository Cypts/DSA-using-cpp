#include<iostream>
using namespace std;
int main(){
    int array[]={0,1,2,3,4,5};
    int size=sizeof(array)/sizeof(int);
    for(int i=0;1!=size;i++)
    {
        for(int j=i;j!=size;j++)
        {
            if(array[i]+array[j]==5)
            {
                cout<<"Elements are "<<array[i]<<" "<<array[j]<<endl;
            }
        }
    }
}
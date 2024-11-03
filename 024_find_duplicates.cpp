#include<iostream>
using namespace std;
int main(){ 
    int array[]={1,2,3,4,5,5};
    int size=sizeof(array)/sizeof(int);
    int ans=0,i;
    for(i=0;i!=size;i++)
    {
        ans=ans^array[i];
        if(ans==0)
           {
            cout<<"Duplicate number is "<<array[i]; 
            break;
            }
    
    }
    
}
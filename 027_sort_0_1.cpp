#include<iostream>
using namespace std;
int main()
{
    int array[]={0,0,0,1,1,0};
    int size=sizeof(array)/sizeof(int);
    int i=0;
    if(array[i]==0)
        i++;
    int j=size-1;
    if(array[j]==1)
        j--;

}
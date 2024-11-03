#include<iostream>
using namespace std;
int binarySearch(int array[],int size,int key){
    int start=0;
    int end=size-1;
    int mid;
    //for optimiation
        mid= start+(end-start)/2;
    while(start<=end)
    {
        if(key==array[mid])
        {
            return mid;
        }
        
        if(key>array[mid])
        {
         start=mid+1;
        }
        else if(key<array[mid]){
         
            end=mid-1;
            
        }
        // mid=(start+end)/2;
        //for optimization
        mid= start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int array[6]={ 4,8,9,10,18,21};
    int index=binarySearch(array,6,21);
    cout<<"Index is "<<index;
}
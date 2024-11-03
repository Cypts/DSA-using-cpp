#include<iostream>
using namespace std;
int findOccurance(int array[],int size,int key,int start ,int end){
    int mid=(end+start)/2;
    int store;
    while(start<=end)
    {
        if(key==array[mid])
            store= mid;
        if(key<array[mid])
            end=mid-1;
        else if(key>array[mid])
            start=mid+1;
        
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int array[8]={0,0,1,1,2,2,2,2};
    cout<<"First occurance "<<findOccurance(array,8,2,0,7);
    cout<<"\nlast occurance "<<findOccurance(array,8,2,7,0);

}
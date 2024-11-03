#include<iostream>
using namespace std;
void print(string &arr,int i,int j)
{
    if(i>j)
        return;
    swap(arr[i],arr[j]);
    i++;
    j--;
    print(arr,i,j);
}
int main()
{
    string str="ayush";
    print(str,0,str.length()-1);
    cout<<str;
}
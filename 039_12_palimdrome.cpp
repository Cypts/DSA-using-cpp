#include<iostream>
using namespace std;
bool palindrome(string & arr,int i,int j)
{   
    if(i>j)
        return true;
    if(arr[i]==arr[j])
    {  
        return palindrome(arr,i+1,j-1);
        return true;
    }
}
int main()
{
    string str="accy";
    int ans = palindrome(str,0,str.length()-1);
    if( ans){
        cout<<"Yes";
    }
    else
        cout<<"no";
    
}
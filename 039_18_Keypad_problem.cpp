#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(vector<string>& arr,string s[],string output,int index,vector<string> &ans)
{
    if(index>=arr.size())
        ans.push_back(output);
        return;
    //exclude
    solve(arr,s,output,index+1,ans);
    string element= arr[index];
    for (char ch : str) {
        solve(arr, s, output + ch, index + 1, ans);
    }

}
vector<string> keypad(vector<string> &arr)
{
    string s[8]={"abc","def","ghi","klm","nop","qrs","tuv","wxyz"};
    vector<string> ans;
    string output=" ";
    int index =0;
    solve(arr,s,output,index,ans);
}
int main()
{

}
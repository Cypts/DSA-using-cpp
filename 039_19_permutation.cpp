#include<iostream>
using namespace std;
#include<vector>
void solve(vector<string> output,int index, vector<string> &ans,vector<string> s)
{
    
    if(index>=s.size())
    {
        string element= output[index];
        ans.push_back(element);
        return ;
    }
    solve(output,index+1,ans,s);
    for(int i=0;i!=s.size();i++)
    {
        string element=s[index];
        output.push_back(element);
        solve(output,index+1,ans,s);
        output.pop_back();
    }
}
vector<string> permutation(vector<string> s)
{
    vector<string> output;
    vector<string> ans;
    int index=0;
    solve(output,index,ans,s);
    
    return ans;

}
int main()
{
    vector<string> s={"ay"};
    vector<string> ans= permutation(s);
    
    for(auto i=0;i!=ans.size();i++)
    {
        
        cout<<"{ "<<ans[i]<<" }"<<endl;
    }

}
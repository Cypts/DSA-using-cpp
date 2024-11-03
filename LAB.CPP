#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> ans;
	unordered_map<int,int> store;
   for(int i =0;i<arr.size();i++){
      store[arr[i]]=i;
   }
   for(auto i:arr)
   {
      int s=target-i;
      if(store.find(s)!=store.end())ans[i].second=s;
   }
   if(ans.empty())
	return ans;
}

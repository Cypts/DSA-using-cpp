#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> adj;
    void add(int u,int v)
    {
        adj[u].push_back(v);
    }
    
    void sort(int source,int n)
    {
        vector<int> indegree(n);

        for(auto i : adj){
            for(auto j: i.second)
            {
                indegree[j]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int front= q.front();
            q.pop();
            ans.push_back(front);
            for(auto i:adj[front])
            {
                indegree[i]--;
                if(indegree[i]==0)q.push(i);
            }

        }
        for(auto i:ans) cout<<i<<" ";
        
    }
};
int main(){
    int v,e;
    cout<<"Enter no of nodes:";
    cin>>v;
    cout<<"Enter no of edges:";
    cin>>e;
    graph g;
    
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add(u,v);
    }
    g.sort(1,v);
    //some error with compiler
    
}
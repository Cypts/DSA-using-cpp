#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int,list<int>> adj;
    void add(int u,int v,bool i)
    {
        adj[u].push_back(v);
        if(i==false) adj[v].push_back(u);
    }
    map<int, int> parent;
    map<int,bool> visited;
    bool displayBFS(int i,int k)
    {
        bool flag=false;
        visited[i]=1;
        parent[k]=i;
        for(auto j: adj[i])
        {
            if(visited[j] && parent[j]!=i)
            {
                return true;
            }
            else if(!visited[j])
            {
                if(displayBFS(j,i)) return true; 
            }
        }
        return false;
    }
    bool dfs(int nodes,int source)
    {
        bool flag=false;
        for(int i= source; i<=nodes-1;i++)
        {
            if(!visited[i])
            {
                flag=displayBFS(i,-1);
                if( flag) {
                    return flag;}
            }
        }
        return flag;
    }
};
int main()
{
    int nodes;
    cout<<"Enter no of nodes:";
    cin>>nodes;
    int edges;
    //5 5 0 1 1 2 2 3 3 4 4 1
    cout<<"Enter no of edges:";
    cin>>edges;
    graph g;
    for(int i =1;i<=edges;i++)
    {
        int k,j;
        cin>>k>>j;
        g.add(k,j,0);
    }
    bool ans=g.dfs(nodes,1);
    if(ans) cout<<"Loop Detected";
    else cout<<"Not Detected";
}
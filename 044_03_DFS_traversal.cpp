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
    map<int,bool> visited;
    void displayBFS(int i)
    {
        cout<<i<<" ";
        visited[i]=1;
        for(auto j: adj[i])
        {
            if(!visited[j])displayBFS(j);
        }
    }
    void dfs(int nodes,int source)
    {
        for(int i= source; i<=nodes-1;i++)
        {
            if(!visited[i])
            {
                displayBFS(i);
            }
        }
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
    g.dfs(nodes,0);
}
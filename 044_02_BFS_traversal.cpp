#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int,list<int>> adj;
    void add(int u, int v, bool direction)
    {
        adj[v].push_back(u);
        if(direction==0)
            adj[u].push_back(v);

    }
    queue<int> q;
    map<int,bool> visited;
    vector<int > ans;
    void BFS(int node)
    {
        q.push(node);
        while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        visited[front]=1;
        for(auto i: adj[front])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
            }
        }
    }cout<<"ans:";
    for(auto i : ans)
    {
         cout<<i<<" ";
    }
    }
};
int main()
{
    int n;
    int m;
    cout<<"Enter no of Nodes: ";
    cin>>n;
    cout<<"Enter no of edges: ";
    cin>>m;
    graph g;
    for(int i =0;i!=m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add(u,v,0);
    }
    g.BFS(1);
}

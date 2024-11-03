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
    map<int,int> parent;
    queue<int> q;
    map<int,bool> visited;
    vector<int > ans;
    void BFS(int node)
    {
        bool flag=false;
        q.push(node);
        while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        visited[front]=1;
        for(auto i: adj[front])
        {
            if(visited[i] && parent[i]!=front)
            {
                cout<<"Detected";
                flag=true;
                return;
            }
            if(!visited[i])
            {
                parent[front]=i;
                q.push(i);
                visited[i]=1;
            }
        }

    }
    if(!flag) cout<<"Not";
    }
    void cycle(int n)
{
    for(int i=1 ;i!=n+1;i++ )
    {
        if(!visited[i])BFS(i);
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
    g.cycle(n);
    
}

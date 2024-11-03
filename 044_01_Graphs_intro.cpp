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
    void adjList()
    {
        for(auto i: adj)
        {
            cout<<i.first<<"-> ";
            for(auto j: i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
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
    g.adjList();
}

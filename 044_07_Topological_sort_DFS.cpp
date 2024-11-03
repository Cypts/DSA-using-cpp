#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,bool> visited;
    unordered_map<int,list<int>> adj;
    stack<int> s;
    void add(int u,int v)
    {
        adj[u].push_back(v);
    }
    void dfs(int source){
        visited[source]=true;
        s.push(source);
        for(auto i: adj[source])
        {
            if(!visited[i]) dfs(i);
        }
    }
    void display(){
        if(s.empty()) return ;
        int i= s.top();
        s.pop();
        display();
        cout<<i<<" ";
    }
    void sort(int source,int nodes)
    {
        for(int i=source;i<=nodes;i++)
        {
            if(!visited[i]) dfs(i);
        }
        display();
    }  
};
int main(){
    int nodes, edges;
    cout<<"Enter no of nodes: ";
    cin>>nodes;
    cout<<"Enter no of edges: ";
    cin>>edges;
    graph g;
    for(int i=1;i<=edges;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add(u,v);
    }
    g.sort(1,nodes);
    
}
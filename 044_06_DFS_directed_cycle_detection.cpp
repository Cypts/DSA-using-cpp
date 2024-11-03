#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int,list<int>> adj;
    void add(int u,int v, bool directed)
    {
        adj[u].push_back(v);
        if(!directed) adj[v].push_back(u);
    }
    map<int,bool> visited;
    map<int, bool> dfsVisited;
    bool dfs(int source){
        visited[source]=1;
        dfsVisited[source]=1;
        for(auto i: adj[source])
        {
            if(visited[i]&&dfsVisited[i]) return true;

            if(!visited[i])if(dfs(i)) return true;
        }
        dfsVisited[source]=0;
        return false;
    }
    bool cycle(int nodes,int source){
        for(int i = source;i<=nodes;i++)
        {
            if(!visited[i]) return dfs(i);
        }
        return false;
    }

};
int main()
{
    int nodes;
    int edges;
    cout<<"Enter no of nodes: ";
    cin>>nodes;
    cout<<"Enter no of Edges:";
    cin>>edges;
    graph g;
    for(int i =1 ;i<=edges;i++)
    {
        int u,v;
        cin>>u>>v;
        g.add(u,v,1);
    }
    if(g.cycle(nodes,1)) cout<<"Detected";
    else cout<<"Not detected";
}

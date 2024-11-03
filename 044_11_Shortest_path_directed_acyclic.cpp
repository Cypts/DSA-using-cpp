#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void add(int u, int v, int weight){
        adj[u].push_back({v,weight});
    }  
    stack<int> store;
    
    void dfs(int node,vector<bool> &visited){
        visited[node]=true;
        for(auto &i: adj[node])
        {
            if(!visited[i.first])dfs(i.first,visited);
        }
        store.push(node);
    }
    void sort(int n){
        vector<bool> visited(n,false);
        for(int i =0;i<n;i++)
        {
            if(!visited[i]) dfs(i,visited);
        }

    }
    vector<int> path(int source,int n){
        vector<int> distance(n,INT_MAX);
        distance[source]=0;
        while(!store.empty()){
            int top=store.top();
            store.pop();
            if(distance[top]!=INT_MAX)
            {
                for(auto i: adj[top])
                if(distance[top]+i.second<distance[i.first])distance[i.first]=distance[top]+i.second;
            }
        }
        
        return distance;
    }
};
int main(){
    graph g;
    g.add(0,1,5);
    g.add(0,2,3);
    g.add(1,3,6);
    g.add(1,2,2);
    g.add(2,5,2);
    g.add(2,4,4);
    g.add(2,3,7);
    g.add(3,4,-1);
    g.add(4,5,-2);
    g.sort(6);
    vector<int> ans=g.path(1,6);
    for(int i =0; i<6;i++) {
        cout<<ans[i]<<" ";
    }
}
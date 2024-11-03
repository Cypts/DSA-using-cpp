#include <bits/stdc++.h>
using namespace std;

void bfs(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<int> &parent) {
    queue<int> q;
    visited[node] = true;
    q.push(node);
    
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        
        for (auto i : adj[front]) {
            if (!visited[i]) {
                visited[i] = true; 
                parent[i] = front; 
                q.push(i);
            }
        }
    }
}

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t) {
    unordered_map<int, list<int>> adj;
    for (const auto &edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans;
    vector<int> parent(n + 1, -1); 
    vector<bool> visited(n + 1, false);

    bfs(s, adj, visited, parent);

   
    if (!visited[t]) {
        return {}; 
    }

    for (int i = t; i != -1; i = parent[i]) {
        ans.push_back(i);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

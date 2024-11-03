#include<bits/stdc++.h>

using namespace std;

class graph{
    public:
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  unordered_map<int,list<int>> adj;
  int count=0;
  for( int i=0; i<edges.size();i++)
  {
    int u=edges[i].first;
    int v=edges[i].second;
    adj[u].push_back(v);
  }
  vector<int> indegree(n+1,0);
  for(auto i: adj)
  {
    for(auto j: i.second) indegree[j]++;
  }
  queue<int> q;
  for(int i =1;i<=n;i++)
  {
    if(indegree[i]==0) q.push(i);
  }
  while(!q.empty())
  {
    int front=q.front();
    q.pop();
    count++;
    for (auto i : adj[front]) {
      indegree[i]--;
      if (indegree[i] == 0)
        q.push(i);
    }
  }
  if (count == n)
    return 0;
  else
    return 1;
}
};
int main() {
    graph g;
    vector<pair<int, int>> edges = {{1, 2}, {2, 3}, {3, 1}}; // Example edges with a cycle
    int n = 3; // Number of nodes
    int result = g.detectCycleInDirectedGraph(n, edges);
    
    if (result == 0) {
        cout << "No cycle detected." << endl;
    } else {
        cout << "Cycle detected." << endl;
    }

    return 0;
}
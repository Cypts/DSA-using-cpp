#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to find the vertex with the minimum key value, from the set of vertices not yet included in the MST
int minKeyVertex(vector<int>& key, vector<bool>& inMST, int V) {
    int minKey = INT_MAX;
    int minIndex = -1;

    for (int v = 0; v < V; v++) {
        if (!inMST[v] && key[v] < minKey) {
            minKey = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to print the edges of the MST
void printMST(vector<int>& parent, vector<vector<int>>& graph, int V) {
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " " << i << " " << graph[i][parent[i]] << endl;
    }
}

// Function to construct and print the MST using Prim's algorithm
void primMST(vector<vector<int>>& graph, int V) {
    vector<int> parent(V);  // Array to store constructed MST
    vector<int> key(V, INT_MAX);  // Key values used to pick the minimum weight edge
    vector<bool> inMST(V, false);  // To represent set of vertices included in MST

    // Start from the first vertex
    key[0] = 0;
    parent[0] = -1;  // First node is always the root of the MST

    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum key vertex not yet included in MST
        int u = minKeyVertex(key, inMST, V);

        // Add the picked vertex to the MST set
        inMST[u] = true;

        // Update the key values and parent index of the adjacent vertices
        for (int v = 0; v < V; v++) {
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Print the constructed MST
    printMST(parent, graph, V);
}

int main() {
    int V;
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V));

    // Reading the adjacency matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }
    // Call Prim's algorithm to find the MST
    primMST(graph, V);

    return 0;
}

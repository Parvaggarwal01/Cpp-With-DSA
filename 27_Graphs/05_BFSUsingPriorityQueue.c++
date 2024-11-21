#include <iostream>
#include <vector>
#include <queue>
// #include <algorithm> // For std::sort
using namespace std;

#define MAX_VERTICES 10  

void addEdge(vector<vector<int> >& adj, int u, int v) {
    adj[u].push_back(v);  // Add v to u's list
    adj[v].push_back(u);  // Add u to v's list (undirected graph)
}

// Function to perform BFS traversal
void BFS(vector<vector<int> >& adj, int startVertex) {
    vector<bool> visited(MAX_VERTICES, false); // Track visited vertices
    priority_queue<int, vector<int>, greater<int> > pq; // Min-heap for BFS

    visited[startVertex] = true; // Mark the start vertex as visited
    pq.push(startVertex); // Enqueue the start vertex

    while (!pq.empty()) {
        int v = pq.top(); // Get the smallest vertex
        cout << v << " "; // Print the current vertex
        pq.pop(); // Dequeue the front vertex

        // Visit all unvisited adjacent vertices
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true; // Mark as visited
                pq.push(neighbor); // Enqueue the neighbor
            }
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int> > adj(MAX_VERTICES); // Adjacency list

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    // Start BFS from vertex 0 (or any other vertex as needed)
    BFS(adj, 0); // Starting BFS from vertex 0

    return 0;
}
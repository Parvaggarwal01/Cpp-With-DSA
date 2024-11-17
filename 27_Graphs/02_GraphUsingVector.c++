#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int> >& adj, int u, int v, bool direction) {
    // direction = 0 -> undirected
    // direction = 1 -> directed

    // create an edge from u to v
    adj[u].push_back(v);

    if (direction == 0) {
        adj[v].push_back(u);
    }
}

void printAdjList(const vector<vector<int> >& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << " -> ";
        for (int j : adj[i]) {
            cout << j << ", ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    // Initialize adjacency list
    vector<vector<int> > adj(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter the nodes for edge " << i + 1 << ": ";
        cin >> u >> v;

        // Create an undirected graph
        addEdge(adj, u, v, 0);
    }

    printAdjList(adj);

    return 0;
}

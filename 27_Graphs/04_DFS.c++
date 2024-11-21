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
            cout << j << " ";
        }
        cout << endl;
    }
}


void dfsHelper(int node, vector<vector<int> > &adj, vector<bool> &visited, vector<int> &result){
    visited[node] = true;
    result.push_back(node);

    for(int i = 0; i<adj[node].size(); i++){
        int neighbor = adj[node][i];
        if(!visited[neighbor]){
            dfsHelper(neighbor, adj, visited, result);
        }
    }
}


vector<int> dfs(vector<vector<int> > &adj){
    int n = adj.size();
    vector<bool> visited(n, false);
    vector<int> result;


    dfsHelper(0, adj, visited, result);

    return result;
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

    cout << "DFS Traversal: " << endl;
    vector<int> result = dfs(adj);
    for(int i = 0; i<result.size(); i++){
        cout << result[i] << " ";
    } cout << endl;




    return 0;
}

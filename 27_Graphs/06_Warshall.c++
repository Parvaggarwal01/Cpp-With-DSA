#include <iostream>
#include <vector>
using namespace std;

// Function to compute the reachability matrix using Warshall's Algorithm
void warshallAlgorithm(vector<vector<int> > &graph, int N) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    // Input the adjacency matrix
    vector<vector<int> > graph(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    int u, v;
    cin >> u >> v;

    // Compute the reachability matrix
    warshallAlgorithm(graph, N);

    // Output the reachability matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // Check if there is a path from u to v
    if (graph[u][v]) {
        cout << "Path Exists" << endl;
    } else {
        cout << "Path does not Exist" << endl;
    }

    return 0;
}
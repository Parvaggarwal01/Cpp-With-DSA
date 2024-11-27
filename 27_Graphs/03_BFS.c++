#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<vector<int> > &adj, int u, int v, bool direction){
    adj[u].push_back(v);

    if(direction == 0){
        adj[v].push_back(u);
    }
}

void printAdjList(vector<vector<int> > &adj){
    for(int i = 0; i<adj.size(); i++){
        cout << i << " -> ";
        for(int j = 0; j<adj[i].size(); j++){
            cout << adj[i][j] << ", ";
        }cout << endl;
    }   
}

vector<int> bfs(vector<vector<int> >& adj){
    int n = adj.size();
    vector<bool> visited(n, false);
    vector<int> results;

    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty()){
        int top = q.front();
        q.pop();
        results.push_back(top);

        for(int i : adj[top]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }

    return results;
}

int main(){
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    vector<vector<int> > adj(n);

    for(int i = 0; i<m; i++){
        int u, v;
        cout << "Enter the nodes for edge " << i+1 << ": ";
        cin >> u >> v;

        addEdge(adj, u, v, 0);
    }


    printAdjList(adj);


    cout << "BFS Traversal" << endl;
    vector<int> bfsResult = bfs(adj);

    for(int i = 0; i<bfsResult.size(); i++){
        cout << bfsResult[i] << ", ";
    } 

}
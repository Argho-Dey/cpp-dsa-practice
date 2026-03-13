#include <iostream>
using namespace std;

int adj[10][10], visited[10], n = 5;

void bfs(int s) {
    int q[10], f = 0, r = 0;
    visited[s] = 1;
    q[r++] = s;

    while (f < r) {
        int node = q[f++];
        cout << node << " ";
        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q[r++] = i;
            }
        }
    }
}

int main() {
    // fixed adjacency matrix
    int graph[5][5] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,1,0},
        {0,1,1,0,1},
        {0,1,0,1,0}
    };

    // copy to adj
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = graph[i][j];

    // initialize visited
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int start = 0; // fixed start node

    cout << "BFS Traversal: ";
    bfs(start);

    return 0;
}

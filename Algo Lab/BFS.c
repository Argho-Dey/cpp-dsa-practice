#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Graph using adjacency matrix (simple example)
    int graph[5][5] = {
        {0,1,1,0,0}, // Node 0 connected to 1 and 2
        {1,0,0,1,0}, // Node 1 connected to 0 and 3
        {1,0,0,1,1}, // Node 2 connected to 0,3,4
        {0,1,1,0,1}, // Node 3 connected to 1,2,4
        {0,0,1,1,0}  // Node 4 connected to 2,3
    };

    bool visited[5] = {false}; // visited array
    queue<int> q;

    int start = 0; // starting node
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // check neighbors
        for (int i = 0; i < 5; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    return 0;
}

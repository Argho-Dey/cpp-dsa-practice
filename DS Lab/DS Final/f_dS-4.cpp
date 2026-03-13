#include <iostream>
using namespace std;
#define MAX_NODES 20

int graph[MAX_NODES][MAX_NODES] = {0};
bool visited[MAX_NODES] = {false};
int junctions, paths;

void DFS(int node) {
    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < junctions; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    cout << "Enter number of junctions and paths: ";
    cin >> junctions >> paths;

    cout <<"Enter paths (start end for each connection):"<<endl;
    for (int i = 0; i < paths; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int start;
    cout << "Enter starting junction: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int adj[10][10], visited[10], n = 5;

void dfs(int s)
{
    cout <<s<<" ";
    visited [s]=1;
    for(int i =0; i<n; i++)
    {
        if (adj[i][s]==1&&visited[i]==0)
        {

        dfs(i);
    }
}
}

int main() {

    int graph[5][5] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,1,0},
        {0,1,1,0,1},
        {0,1,0,1,0}
    };


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = graph[i][j];


    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int start = 0;

    cout << "DFS Traversal: ";
    dfs(start);

    return 0;
}

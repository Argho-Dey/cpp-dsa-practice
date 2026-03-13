#include <iostream>
using namespace std;
#define V 5

void prims(int g[V][V])
{
    int parent[V], cost[V];
    bool selected[V] = {0};

    for (int i = 0; i < V; i++)
    {
        cost[i] = 9999;
        parent[i] = -1;
    }

    cost[0] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        int u = -1;
        for (int j = 0; j < V; j++)
            if (!selected[j] && (u == -1 || cost[j] < cost[u]))
                u = j;

        selected[u] = true;

        for (int v = 0; v < V; v++)
            if (!selected[v] && g[u][v] > 0 && g[u][v] < cost[v])
            {
                cost[v] = g[u][v];
                parent[v] = u;
            }
    }

    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << "  (" << cost[i] << ")\n";
}

int main()
{
    int g[V][V] =
    {
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0}
    };

    prims(g);
}


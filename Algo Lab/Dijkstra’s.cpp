#include <iostream>
using namespace std;
#define V 5
#define INF 9999

void dijkstra(int g[V][V], int src)
{
    int dist[V];
    int visited[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = 999;
        visited[i] = 0;
    }
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        int u = -1;


        for (int i = 0; i < V; i++)
        {
            if (!visited[i] && (u == -1 || dist[i] < dist[u]))
                u = i;
        }

        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (g[u][v] && dist[u] + g[u][v] < dist[v])
            {
                dist[v] = dist[u] + g[u][v];
            }
        }
    }


    cout << "Shortest distance from source " << src << ":\n";
    for (int i = 0; i < V; i++)
    {
        cout << "Node " << i << " : " << dist[i] << "\n";
    }
}

int main()
{

    int g[V][V] =
    {
        {0,10,0,0,5},
        {0,0,1,0,2},
        {0,0,0,4,0},
        {7,0,6,0,0},
        {0,3,9,2,0}
    };

    dijkstra(g, 0);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int findParent(int node, int parent[])
{
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node], parent);
}

void kruskal(int V, int E, int u[], int v[], int w[])
{

    for (int i = 0; i < E - 1; i++)
    {
        for (int j=0; j<E-i-1; j++)
        {if (w[j]>w[j+1])

            swap(u[j], u[j + 1]);
            swap(w[j], w[j + 1]);


                swap(v[j], v[j + 1]);
            }
        }


    int parent[V + 1];
    for (int i = 1; i <= V; i++)
        parent[i] = i;

    int mstWeight = 0;
    cout << "Edges in MST:\n";

    for (int i = 0; i < E; i++)
    {
        int pu = findParent(u[i], parent);
        int pv = findParent(v[i], parent);

        if (pu != pv)
        {
            cout << u[i] << " - " << v[i] << " (" << w[i] << ")\n";
            mstWeight += w[i];
            parent[pv] = pu; // Union
        }
    }

    cout << "Total Weight: " << mstWeight << "\n";
}

int main()
{
    int V, E;
    cin >> V >> E;

    int u[E], v[E], w[E];
    for (int i = 0; i < E; i++)
    {
        cin >> u[i] >> v[i] >> w[i];
    }

    kruskal(V, E, u, v, w);
    return 0;
}


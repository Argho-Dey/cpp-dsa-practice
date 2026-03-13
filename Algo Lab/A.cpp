#include <iostream>
using namespace std;
#define V 3
#define INF 99999

void floydWarshall(int d[V][V])
{

    for (int k=0;k<V;k++)
    for (int i=0; i<V; i++)
    for (int j=0; j<V; j++)
    if (d[i][k]+d[k][j]<d[i][j])
    d[i][j]=d[i][k]+d[k][j];

    // Print result
    cout << "Shortest distance matrix:\n";
    for (int i=0; i<V; i++){
        for (int j=0; j<V; j++){
        if (d[i][j]==999)cout<< 999;
    else cout << d[i][j]<< " ";
    }cout << endl;}
}

int main()
{
    int graph[V][V] =
    {
        {0,   5,  INF},
        {INF, 0,   2},
        {3, INF,   0}
    };

    floydWarshall(graph);
    return 0;
}

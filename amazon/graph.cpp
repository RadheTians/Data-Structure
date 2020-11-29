#include <bits/stdc++.h>
using namespace std;

class Graph
{

public:
    int V;
    vector<int> *edge;
    Graph(int V)
    {
        this->V = V;
        edge = new vector<int>[V];
    }

    void addEdge(int x, int y)
    {
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << "--> ";
            for (int e : edge[i])
                cout << e << ", ";
            cout << endl;
        }
    }
};

int main()
{

    Graph g = Graph(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.printGraph();
    return 0;
}
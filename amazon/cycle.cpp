#include <bits/stdc++.h>
using namespace std;

class Graph
{
    map<int, list<int>> edge;

public:
    void addEdge(int x, int y)
    {
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    bool cycle_helper(int s, map<int, bool> &visited, int p)
    {
        visited[s] = true;

        for (int it : edge[s])
        {
            if (!visited[it])
                return cycle_helper(it, visited, s);
            else if (p != it)
                return true;
        }
        return false;
    }
    bool detect_cycle()
    {
        map<int, bool> visited;
        for (auto it : edge)
        {
            int node = it.first;
            visited[node] = false;
        }
        return cycle_helper(0, visited, -1);
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1);
    //g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    cout << g.detect_cycle() << endl;
    return 0;
}
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
    void bfs(int s)
    {
        queue<int> qt;
        map<int, bool> visited;
        for (auto it : edge)
        {
            int node = it.first;
            visited[node] = false;
        }
        qt.push(s);
        visited[s] = true;
        while (!qt.empty())
        {

            int node = qt.front();
            qt.pop();
            cout << node << " ";
            for (int it : edge[node])
            {
                if (!visited[it])
                {
                    qt.push(it);
                    visited[it] = true;
                }
            }
        }
        cout << endl;
    }
    void dfs_helper(int s, map<int, bool> &visited)
    {
        visited[s] = true;
        cout << s << " ";

        for (int it : edge[s])
        {
            if (!visited[it])
                dfs_helper(it, visited);
        }
    }
    void dfs(int s)
    {
        map<int, bool> visited;
        for (auto it : edge)
        {
            int node = it.first;
            visited[node] = false;
        }
        dfs_helper(s, visited);
        cout << endl;
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
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.bfs(0);
    g.dfs(3);
    cout << g.detect_cycle() << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Kruskal
{
    vector<pair<int, pair<int, int>>> lst;
    int *parent;
    int *rnk;

public:
    Kruskal(int v)
    {
        parent = new int[v];
        rnk = new int[v];
        for (int i = 0; i < v; i++)
        {
            rnk[i] = 0;
            parent[i] = i;
        }
    }
    void addEdge(int x, int y, int wt)
    {
        lst.push_back({wt, {x, y}});
    }
    void printEdge()
    {

        for (auto it : lst)
            cout << it.first << "--> " << it.second.first << "-" << it.second.second << endl;
    }
    int find(int u)
    {
        if (parent[u] != u)
            parent[u] = find(parent[u]);
        return parent[u];
    }
    void merge(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (rnk[x] > rnk[y])
            parent[y] = x;
        else
            parent[x] = y;
        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
    int minSpaniningTree()
    {
        int cost = 0;
        sort(lst.begin(), lst.end());

        for (auto it : lst)
        {
            int x = find(it.second.first);
            int y = find(it.second.second);
            if (x != y)
            {
                cost += it.first;
                merge(x, y);
            }
        }
        return cost;
    }
};

int main()
{
    Kruskal g = Kruskal(6);
    g.addEdge(0, 1, 3);
    g.addEdge(0, 3, 1);
    g.addEdge(1, 3, 3);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(2, 4, 5);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 6);
    g.addEdge(4, 5, 2);
    g.printEdge();
    cout << "Cost: " << g.minSpaniningTree() << endl;
    return 0;
}
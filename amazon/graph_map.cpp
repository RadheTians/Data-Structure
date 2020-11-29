#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<char, vector<pair<int, char>>> edge;

    void addEdge(char x, char y, bool bi, int wt)
    {
        edge[x].push_back({wt, y});
        if (bi)
            edge[y].push_back({wt, x});
    }
    void printEdge()
    {

        for (auto it : edge)
        {
            char key = it.first;
            vector<pair<int, char>> vec = it.second;
            cout << key << "--> ";
            for (auto t : vec)
                cout << t.first << " " << t.second << ", ";
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge('A', 'B', true, 20);
    g.addEdge('A', 'C', true, 50);
    g.addEdge('B', 'D', true, 30);
    g.addEdge('C', 'D', true, 40);
    g.addEdge('A', 'D', false, 10);
    g.printEdge();
    return 0;
}
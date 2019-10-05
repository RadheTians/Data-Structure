#include<bits/stdc++.h> 
using namespace std;

class AdjList
{
private:
    int v;
    vector<int> adj[10];
public:
    AdjList(int);
    ~AdjList();
    void addPath(int u,int v);
    void print();
};

AdjList::AdjList(int v)
{
    this->v = v;
}

AdjList::~AdjList()
{
}
void AdjList::addPath(int u, int v){
    this->adj[u].push_back(v);
    this->adj[v].push_back(u);
}
void AdjList::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " :";
        for(auto j =adj[i].begin();j!=adj[i].end();++j){
            cout <<" -->> " <<*j;
        }
    }
}

int main(){
    AdjList graph(4);
    graph.addPath(0,1);
    graph.addPath(0,2);
    graph.addPath(0,3);
    graph.addPath(1,2);
    graph.addPath(1,3);
    graph.addPath(2,3);
    graph.print();
    return 0;
}
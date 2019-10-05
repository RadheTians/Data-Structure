#include<bits/stdc++.h> 
using namespace std;

class AdjListWeightedDirected
{
private:
    int v;
    vector< pair <int,int> > adj[10];
public:
    AdjListWeightedDirected(int);
    ~AdjListWeightedDirected();
    void addPath(int,int,int);
    void print();
};

AdjListWeightedDirected::AdjListWeightedDirected(int v)
{
    this->v = v;
}

AdjListWeightedDirected::~AdjListWeightedDirected()
{
}
void AdjListWeightedDirected::addPath(int u, int v, int w){
    this->adj[u].push_back(make_pair(v,w));
}
void AdjListWeightedDirected::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " : ";
        for(int j =0;j<adj[i].size();++j){
            cout <<" -->> " <<adj[i][j].first<<" : " << adj[i][j].second;
        }
    }
}

int main(){
    AdjListWeightedDirected graph(6);
    graph.addPath(0,1,10);
    graph.addPath(1,2,30);
    graph.addPath(1,3,20);
    graph.addPath(2,0,12);
    graph.addPath(2,4,15);
    graph.addPath(3,2,10);
    graph.addPath(3,4,16);
    graph.addPath(3,5,20);
    graph.addPath(4,5,24);
    graph.print();
    return 0;
}
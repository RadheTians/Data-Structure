#include<bits/stdc++.h>
using namespace std;

class AdjMatrixWeightedDirected
{
private:
    int v;
    int adj[10][10];
public:
    AdjMatrixWeightedDirected(int);
    ~AdjMatrixWeightedDirected();
    void addPath(int,int,int);
    void print();
};

AdjMatrixWeightedDirected::AdjMatrixWeightedDirected(int v)
{
    this->v = v;
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            adj[i][j] = 0;
}

AdjMatrixWeightedDirected::~AdjMatrixWeightedDirected()
{
}
void AdjMatrixWeightedDirected::addPath(int u,int v,int w){
    this->adj[u][v] = w;
}
void AdjMatrixWeightedDirected::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " : ";
        for(int j =0;j<v;j++){
            cout <<" " << this->adj[i][j];
        }
    }
}

int main(){
    AdjMatrixWeightedDirected graph(6);
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
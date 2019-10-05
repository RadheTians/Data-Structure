#include<bits/stdc++.h>
using namespace std;

class AdjMatrix
{
private:
    int v;
    int adj[10][10];
public:
    AdjMatrix(int);
    ~AdjMatrix();
    void addPath(int,int);
    void print();
};

AdjMatrix::AdjMatrix(int v)
{
    this->v = v;
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            adj[i][j] = 0;
}

AdjMatrix::~AdjMatrix()
{
}
void AdjMatrix::addPath(int u,int v){
    this->adj[u][v] = 1;
    this->adj[v][u] = 1;
}
void AdjMatrix::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " : ";
        for(int j =0;j<v;j++){
            cout <<" " << this->adj[i][j];
        }
    }
}

int main(){
    AdjMatrix graph(4);
    graph.addPath(0,1);
    graph.addPath(0,2);
    graph.addPath(0,3);
    graph.addPath(1,2);
    graph.addPath(1,3);
    graph.addPath(2,3);
    graph.print();
    return 0;
}
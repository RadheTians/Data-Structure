#include<bits/stdc++.h> 
using namespace std;

class DFS
{
private:
    int v;
    vector<int> adj[10];
public:
    DFS(int);
    ~DFS();
    void addPath(int u,int v);
    void print();
    void DFT(int);
    bool checkItem(stack<int>,int);
};

DFS::DFS(int v)
{
    this->v = v;
}

DFS::~DFS()
{
}
void DFS::addPath(int u, int v){
    this->adj[u].push_back(v);
}
void DFS::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " :";
        for(auto j =adj[i].begin();j!=adj[i].end();++j){
            cout <<" -->> " <<*j;
        }
    }
}
void DFS::DFT(int root){
    stack<int> dfsStack;
    vector<int> track;
    dfsStack.push(root);
    while (!dfsStack.empty())
    {
        int i = dfsStack.top();
        dfsStack.pop();
        track.push_back(i);
        for(auto j =adj[i].begin();j!=adj[i].end();++j){
            if(find(track.begin(), track.end(), *j)==track.end() && !checkItem(dfsStack, *j))
                dfsStack.push(*j);
        }

    }
    cout <<endl;
    for(auto j =track.begin();j!=track.end();++j){
            cout <<*j << " -->> ";
        }
    
}
bool DFS::checkItem(stack<int> s,int i){
    while(!s.empty()){
        if(s.top()==i)
           return true;
        s.pop();
    }
    return false;
}

int main(){
    DFS graph(8);
    graph.addPath(0,1);
    graph.addPath(1,2);
    graph.addPath(1,4);
    graph.addPath(2,3);
    graph.addPath(2,5);
    graph.addPath(3,0);
    graph.addPath(3,6);
    graph.addPath(3,7);
    graph.addPath(4,5);
    graph.addPath(5,1);
    graph.addPath(6,2);
    graph.addPath(6,5);
    graph.addPath(7,0);
    graph.addPath(7,6);
    graph.print();
    graph.DFT(0);
    return 0;
}
#include<bits/stdc++.h> 
using namespace std;

class BFS
{
private:
    int v;
    vector<int> adj[10];
public:
    BFS(int);
    ~BFS();
    void addPath(int u,int v);
    void print();
    void BFT(int);
    bool checkItem(queue<int>,int);
};

BFS::BFS(int v)
{
    this->v = v;
}

BFS::~BFS()
{
}
void BFS::addPath(int u, int v){
    this->adj[u].push_back(v);
}
void BFS::print(){
    for(int i=0;i<v;i++){
        cout <<endl << i << " :";
        for(auto j =adj[i].begin();j!=adj[i].end();++j){
            cout <<" -->> " <<*j;
        }
    }
}
void BFS::BFT(int root){
    queue<int> queue1;
    queue<int> queue2;
    queue1.push(root);
    while (!queue1.empty())
    {
        int i = queue1.front();
        queue1.pop();
        queue2.push(i);
        for(auto j =adj[i].begin();j!=adj[i].end();++j){
            if(!checkItem(queue1,*j) && !checkItem(queue2, *j))
                queue1.push(*j);
        }

    }
    cout <<endl;
    while(!queue2.empty()){
            cout << queue2.front() << " -->> ";
            queue2.pop();
        }
    
}
bool BFS::checkItem(queue<int> s,int i){
    while(!s.empty()){
        if(s.front()==i)
           return true;
        s.pop();
    }
    return false;
}

int main(){
    BFS graph(8);
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
    graph.BFT(0);
    return 0;
}
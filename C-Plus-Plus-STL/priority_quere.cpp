#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0:i<n;i++);
#define fore(i,a,b) for(ll i=a;i<b;i++);
#define ford(i,a,b) for(ll i=a,i>b;i--);

int main() {
    ll t;
    cin >> t;
    while(t--){
        priority_queue<int> max_heap;
        priority_queue<int,vector<int>,greater<int>> min_heap;
        max_heap.push(1);
        max_heap.push(10);
        max_heap.push(2);
        max_heap.push(20);
        max_heap.push(15);
        max_heap.push(24);
        while(!max_heap.empty()){
            cout << max_heap.top() << endl;
            max_heap.pop();
        } 
        cout <<"-----------------" <<endl;
        min_heap.push(1);
        min_heap.push(10);
        min_heap.push(2);
        min_heap.push(20);
        min_heap.push(15);
        min_heap.push(24);
        while(!min_heap.empty()){
            cout << min_heap.top() << endl;
            min_heap.pop();
        }
    }
    return 0;
}
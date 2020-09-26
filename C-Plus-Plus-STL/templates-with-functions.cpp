#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0:i<n;i++);
#define fore(i,a,b) for(ll i=a;i<b;i++);
#define ford(i,a,b) for(ll i=a,i>b;i--);

template<typename T> T Max(T a, T b){
    return a<b? b:a;
}
int main() {
    ll t;
    cin >> t;
    while(t--){
        cout << Max(2,3)<<endl;
        cout << Max(2.4,3.2)<<endl;
        cout << Max('b','a')<<endl;
    }
    return 0;
}
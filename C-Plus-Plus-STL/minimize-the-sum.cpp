#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0;i<n;i++)
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define ford(i,a,b) for(ll i=a,i>b;i--)

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >>k;
        priority_queue<int> pq;
        ll x,sum = 0;
        fori(i,n){
            cin >> x;
            pq.push(x);
            sum+=x;
        }
        fori(i,k){
            x = pq.top();
            pq.pop();
            sum-=x;
            x/=2;
            sum+=x;
            pq.push(x);
        }
        cout << sum << endl;
    }
    return 0;
}
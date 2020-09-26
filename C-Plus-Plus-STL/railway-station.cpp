#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0;i<n;i++)
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define ford(i,a,b) for(ll i=a,i>b;i--)

class tarin {
    public:
        ll a;
        ll b;
};

bool compare(tarin x, tarin y){
    if(x.b==y.b)
        return x.a < y.a;
    return x.b < y.b;
}

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        tarin arr[n];
        fori(i,n){
            cin >> arr[i].a >> arr[i].b;
            arr[i].b += arr[i].a;
        }
        sort(arr,arr+n,compare);
    }
    return 0;
}
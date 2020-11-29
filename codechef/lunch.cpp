#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    ll t;
    cin >> t;
    while (t--){
        ll n,i;
        cin >> n;
        for(i = 0; i < n;i++){
            ll b = n - i;
            if(((i & b) + (i | b))==n)
                break;
        }
        if(i==n)
            cout << -1 << endl;
        else
            cout << i << " " << n-i << endl;
        
       
    }
    
    
    

    return 0;

}
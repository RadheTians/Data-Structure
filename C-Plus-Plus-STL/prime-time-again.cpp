#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0;i<n;i++)
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define ford(i,a,b) for(ll i=a,i>b;i--)
#define form(i,a,b,s) for(ll i=a;i*i<=b;i+=s)
bool prime_check(ll p) 
{ 
    if (p <= 1){
        return false; 
    }else if (p <= 3){
        return true; 
    }else if (p % 2 == 0 || p % 3 == 0){
        return false; 
    }
        
    form(j,5,p,6){
        if (p % j == 0 || p % (j + 2) == 0){
            return false;
        } 
    }
  
    return true; 
} 

ll prime_numbers(ll n,ll p) 
{ 
    map<ll,ll> mp;
    vector<ll> vec;
    fore(i,2,n+1) { 
        if (prime_check(i)){
            mp[i]++;
            vec.push_back(i);
        } 
            
    } 
    ll count=0;
    n-=(n/p); 
    fori(i,vec.size()){
        ll x = vec[i];
        //cout << x +n;
        if(mp[n + x] != 0)
            count++;
    }
    return count;
} 

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll d,p;
        cin >> d >> p;
        cout << prime_numbers(d,p)<<endl;
    }
    return 0;
}
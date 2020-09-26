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

ll prime_numbers(ll n) 
{ 
    vector<int> vec;
    for (ll i = 2; i <= n; i++) { 
        if (prime_check(i)) 
            vec.push_back(i);
    } 
    ll count = 0;
    ll sum = 0;
    for(auto it = vec.begin();it!=vec.end();it++){
        sum = *it;
        if(sum >=5){
            auto nit = it;
            if(find(it++,vec.end(),sum)!=vec.end())
                count++;
        }
        
    }
    return count;
} 

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << prime_numbers(n)<<endl;
    }
    return 0;
}
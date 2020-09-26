#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0;i<n;i++)
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define ford(i,a,b) for(ll i=a,i>b;i--)

class countOI {
    public:
        ll num;
        ll a;
        ll b;
};

int main() {
    ll n;
    cin >> n;
    countOI arr[n];
    ll mx = -1;
    fori(i,n){
        cin >> arr[i].num;
        if(mx < arr[i].num)
            mx = arr[i].num;
    }

    ll zs=0,os=0;
    while (mx > 0){
       ll x = mx%2;
       if(x==1){
           os++;
       }else{
           zs++;
       }
       mx/=2;
    }
    ll bit = zs + os;
    fori(i,n){
        mx = arr[i].num;
        zs=0,os=0;
        while (mx > 0){
            ll x = mx%2;
            if(x==1){
                os++;
            }else{
                zs++;
            }
            mx/=2;
        }
        arr[i].a = os;
        arr[i].b = bit-(os + zs)+ zs;
    }
    ll count=-1;
    for (ll i = 0; i < (1<<n); i++){ 
        zs=0,os=0;
        fori(j,n){
            if ((i & (1 << j)) > 0){
                os+=arr[j].a;
                zs+=arr[j].b;
            } 
                
        }
        if(zs==os)
            count++;
    } 
    mx = count;
    zs=0,os=0;
    string str="";
    while (mx > 0){
       ll x = mx%2;
       if(x==1){
           os++;
           str = "1" + str;
       }else{
           zs++;
           str = "0" + str;
       }
       mx/=2;
    }
    fori(i, (bit- (os + zs))){
            str = "0" + str;
    }
    
    cout << str << endl;

    
    return 0;
}
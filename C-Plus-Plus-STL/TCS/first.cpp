#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0;i<n;i++)
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define ford(i,a,b) for(ll i=a,i>b;i--)

int main() {

    ll n;
    cin >> n;
    char c[n];
    fori(i,n){
        cin >> c[i];
    }
    bool flag = false;
    char w = 'x';
    
    ll a=0,b=0,j=0;
    fori(i,n){
        if(c[i]=='A'){
            j = i-1;
            a++;
            while (c[j]=='-' && j>=0){
                j--;
                a++;
            }
        }
        if(c[i]=='B'){
            j = i+1;
            b++;
            while (c[j]=='-' && j<n){
                j++;
                b++;
            }
        }
            
    }
    if(a>b){
        cout << "A" << endl;
    } else if(a==b){
        cout << "Coalition government" << endl;
    } else{
        cout << "B" << endl;
    }
    
    
    



    return 0;
}
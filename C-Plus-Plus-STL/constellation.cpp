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
        ll n;
        cin >> n;
        char c[3][n];
        fori(i,3){
            fori(j,n){
                cin >> c[i][j];
            }
        }
        fori(i,n){
            if(c[0][i]=='#' && c[1][i]=='#' && c[2][i]=='#'){
                cout << '#';
            } else if(c[0][i]=='.' && c[1][i]=='.' && c[2][i]=='.'){
                continue;
            } else if(c[0][i]=='.' && c[1][i]=='*' && c[2][i]=='*' &&
                        c[0][i+1]=='*' && c[1][i+1]=='*' && c[2][i+1]=='.' && 
                        c[0][i+2]=='.' && c[1][i+2]=='*' && c[2][i+2]=='*' ) {
                cout << 'A';
                i+=2;
            }else if(c[0][i]=='*' && c[1][i]=='*' && c[2][i]=='*' &&
                        c[0][i+1]=='*' && c[1][i+1]=='*' && c[2][i+1]=='*' && 
                        c[0][i+2]=='*' && c[1][i+2]=='*' && c[2][i+2]=='*' ) {
                cout << 'E';
                i+=2;
            }else if(c[0][i]=='*' && c[1][i]=='.' && c[2][i]=='*' &&
                        c[0][i+1]=='*' && c[1][i+1]=='*' && c[2][i+1]=='*' && 
                        c[0][i+2]=='*' && c[1][i+2]=='.' && c[2][i+2]=='*' ) {
                cout << 'I';
                i+=2;
            } else if(c[0][i]=='*' && c[1][i]=='*' && c[2][i]=='*' &&
                        c[0][i+1]=='*' && c[1][i+1]=='.' && c[2][i+1]=='*' && 
                        c[0][i+2]=='*' && c[1][i+2]=='*' && c[2][i+2]=='*' ) {
                cout << 'O';
                i+=2;
            }else if(c[0][i]=='*' && c[1][i]=='*' && c[2][i]=='*' &&
                        c[0][i+1]=='.' && c[1][i+1]=='.' && c[2][i+1]=='*' && 
                        c[0][i+2]=='*' && c[1][i+2]=='*' && c[2][i+2]=='*' ) {
                cout << 'U';
                i+=2;
            }
        }
    }
    return 0;
}
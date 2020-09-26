#include<bits/stdc++.h>
using namespace std;
int maxPrime(int n){
    int j=0;
    while(n%2==0){
        j = max(j,2);
        n/=2;
    }
    
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            j = max(j,i);
            n/=i;
        }
    }
    if(n>2)
      j = max(n,j);
    return j;
}

int main() {
    int n,count = 0;
    cin >> n;
    int x = maxPrime(n);
    while(n<0){
      
      cout << x << endl;
      if(x==0) {
        n--;
      }else{
        n = x;
      }
      count++;
      
    }
    cout << count << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i,n) for(ll i=0:i<n;i++);
#define fore(i,a,b) for(ll i=a;i<b;i++);
#define ford(i,a,b) for(ll i=a,i>b;i--);

template<class T> class A{
    public:
        T a;
        T b; 
        A(T x, T y) {a = x, b = y; }
        T Max();
};

template<class T> T A<T>::Max(){
    return a<b?b:a;
}

template<class T, class U= int> class Node{
    public:
        T a;
        U b; 
        Node(T x, T y) {a = x, b = y; }
        T Max();
};

template<class T,class U> T Node<T,U>::Max(){
    return a<b?b:a;
}

int main() {
    ll t;
    cin >> t; 
    while(t--){
        Node<int> a(2,3.2);
        cout << a.Max() << endl;
        Node<float,float> b(2.4,3.2);
        cout << b.Max() << endl;
        Node<char,char> c('b','a');
        cout << c.Max() << endl;
        cout <<"--------------------" << endl;
        A<int> d(2,3.2);
        cout << d.Max() << endl;
        A<float> e(2.4,3.2);
        cout << e.Max() << endl;
        A<char> f('b','a');
        cout << f.Max() << endl;
    }
    return 0;
}
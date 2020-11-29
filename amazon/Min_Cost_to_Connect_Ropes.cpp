#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minCost(vector<ll> vec)
{
    priority_queue<ll, vector<int>, greater<int>> que;

    ll sum = 0;

    for (ll i = 0; i < vec.size(); i++)
        que.push(vec[i]);
    while (que.size() > 1)
    {
        int a = que.top();
        que.pop();
        int b = que.top();
        que.pop();
        int c = a + b;
        que.push(c);
        sum += c;
    }
    return sum;
}

int main()
{
    vector<ll> vec = {8, 4, 6, 12}; // 58
    vec = {20, 4, 8, 2};            // 54
    vec = {2, 2, 3, 3};             // 20
    vec = {1, 2, 5, 10, 35, 89};    // 224
    cout << minCost(vec) << endl;
    return 0;
}
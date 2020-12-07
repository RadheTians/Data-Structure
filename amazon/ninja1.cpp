#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // write your code
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll count = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (arr[i] > (2 * arr[j]))
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
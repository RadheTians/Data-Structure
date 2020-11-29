#include <bits/stdc++.h>

using namespace std;

int armstrong(int n)
{

    if (n > 0)
    {
        int x = n % 10;
        n /= 10;
        return (x * x * x) + armstrong(n);
    }
    else
        return 0;
}

int main()
{

    int n;
    cout << "Enter the Number : ";
    cin >> n;
    if (n == armstrong(n))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
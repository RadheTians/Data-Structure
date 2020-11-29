#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int range(int *seg, int l, int h, int s, int e, int p)
{
    if (l <= s && h >= e)
        return seg[p];
    if (l > e || h < s)
        return 0;
    int mid = (s + e) / 2;
    return gcd(range(seg, l, h, s, mid, 2 * p + 1), range(seg, l, h, mid + 1, e, 2 * p + 2));
}
void update(int *seg, int idx, int val, int s, int e, int p)
{
    if (s == e)
    {
        // Leaf node
        seg[p] = val;
    }
    else
    {
        int mid = (s + e) / 2;
        if (s <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(seg, idx, val, s, mid, 2 * p + 1);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(seg, idx, val, mid + 1, e, 2 * p + 2);
        }
        // Internal node will have the sum of both of its children
        seg[p] = gcd(seg[2 * p + 1], seg[2 * p + 2]);
    }
}
void buildSegment(int arr[], int *seg, int s, int e, int p)
{
    if (s == e)
    {
        seg[p] = arr[s];
        return;
    }

    int mid = (e + s) / 2;
    buildSegment(arr, seg, s, mid, 2 * p + 1);
    buildSegment(arr, seg, mid + 1, e, 2 * p + 2);
    seg[p] = gcd(seg[2 * p + 1], seg[2 * p + 2]);
}

int main()
{

    int arr[] = {1, 3, 5, 4, 9, 7, 8};
    int n = 7;
    int *seg = new int[2 * n];
    buildSegment(arr, seg, 0, n - 1, 0);
    cout << range(seg, 1, 3, 0, n - 1, 0) << endl;
    return 0;
}
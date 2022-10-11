#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#define ull unsigned long long
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
#define vi(n, arr)      \
    vector<ll> arr(n);  \
    for (auto &i : arr) \
    {                   \
        cin >> i;       \
    }
using namespace std;

ll maxSum(vector<ll> a, bool x)
{
    ll msum = LLONG_MIN, tsum = 0, n = a.size();
    if (x)
    {
        for (int i = 0; i < n; i++)
        {
            tsum += a[i];
            msum = max(msum, tsum);
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            tsum += a[i];
            msum = max(msum, tsum);
        }
    }
    return msum;
}

void solve()
{
    int n, m;
    vi(n, a);
    vi(n, b);
    if (maxSum(a, true) > maxSum(a, false))
    {

        while (lb != ub)
        {
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
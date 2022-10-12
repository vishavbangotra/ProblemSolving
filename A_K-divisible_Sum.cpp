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

ll binarySearch(ll lb, ll ub, ll target, ll n)
{
    if (lb == ub - 1)
    {
        if (lb * n >= target)
            return lb;
        else
            return ub;
    }
    if (lb >= ub)
        return ub;
    ll mid = (ub + lb) / 2;
    if (mid * n < target)
        return binarySearch(mid, ub, target, n);
    if (mid * n == target)
        return mid;
    if (mid * n > target)
        return binarySearch(lb, mid, target, n);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << binarySearch(0, k, k, n) << endl;
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
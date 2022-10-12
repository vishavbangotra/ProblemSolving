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

int bs(double lb, double ub, double target)
{
    if (lb == ub - 1)
    {
        if (ub * (5 * ub + 5) / 2 <= target)
            return ub;
        else
            return lb;
    }
    if (ub == lb)
        return ub;
    int mid = (ub + lb) / 2;
    double s = mid * (5 * mid + 5) / 2;
    if (s > target)
        return bs(lb, mid, target);
    else if (s < target)
        return bs(mid, ub, target);
    else
        return mid;
}

int solve()
{
    double n, k;
    cin >> n >> k;
    double tLeft = 240 - k;
    if (tLeft <= 0)
        return 0;
    return bs(0, n, tLeft);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    cout << solve() << endl;
    return 0;
}
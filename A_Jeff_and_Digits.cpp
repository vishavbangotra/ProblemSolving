#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#define ull unsigned long long
#define ll int
#define foreach(i, it) for (auto i = it.begin(); i != it.end(); i++)
#define loop(i, n) for (int i = 0; i < n; i++)
#define array(i, n, arr) \
    vector<ll> arr(n);   \
    for (auto &i : arr)  \
    {                    \
        cin >> i;        \
    }
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    array(i, n, arr);
    int lb = 1, ub = n;
    while (k--)
    {
        arr.push_back(ub--);
    }
    do
    {
        arr.push_back(lb++);
    } while (ub != lb);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    ll p = n;
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n / 2; i++)
    {
        arr.push_back(p--);
    }
    p = 1;
    for (int i = n / 2; i < n; i++)
    {
        arr.push_back(p++);
    }
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
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
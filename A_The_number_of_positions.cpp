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
    int n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    for (int i = a; i <= n - 1; i++)
    {
        if (n - 1 - i > b)
            continue;
        ans++;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}
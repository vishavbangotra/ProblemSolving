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
    int n;
    vi(n, arr);
    int w = 0;
    for (auto i : arr)
        w += i;
    w = w / 2;
    int one = 0, two = 0;
    for (auto i : arr)
    {
        if (i == 100)
            one++;
        else
            two++;
    }
    if (w % 200 == 0)
        cout << "YES" << endl;
    else if (one > 0 && w % 100 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
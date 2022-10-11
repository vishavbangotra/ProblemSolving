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
    vi(n, arr);
    ll mini = LLONG_MAX, index = 0;
    bool flag = false;
    for (ll j = 0; j < n; j++)
    {
        ll i = arr[j];
        if (i < mini)
        {
            mini = i;
            flag = false;
            index = j + 1;
        }
        else
        {
            if (i == mini)
            {
                flag = true;
            }
        }
    }
    if (flag)
        cout << "Still Rozdil" << endl;
    else
        cout << index << endl;
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
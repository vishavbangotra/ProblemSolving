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
    cin >> n;
    vi(n, arr);
    ll len = 2, mlen = 2;
    if (n < 2)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + arr[i - 2])
        {
            len++;
        }
        else
        {
            len = 2;
        }
        mlen = max(len, mlen);
    }
    cout << mlen << endl;
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
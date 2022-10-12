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

ll calSum(vector<ll> &arr, int start, int end)
{
    ll sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int search(vector<vector<ll>> &vsum, ll target, ll row, ll n)
{
    for (int j = row; j < n; j++)
    {
        if (vsum[row][j] == target)
            return j;
    }
    return -1;
}
void solve()
{
    int n;
    cin >> n;
    vi(n, arr);
    ll ans = LLONG_MAX;
    vector<vector<ll>> vsum(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ll sum = calSum(arr, i, j);
            for (int k = j + 1; k < n; k++)
            {
                vsum[i][j] = calSum(arr, i, j);
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        ll csum = vsum[0][j];
        for (int k = j + 1; k < n; k++)
        {
        }
        if (search(vsum, csum, j + 1, n) != -1)
        {
            ans = min(ans, )
        }
    }
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
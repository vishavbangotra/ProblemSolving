#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <queue>
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
    priority_queue<int, vector<int>, greater<int>> q;
    int n, m;
    cin >> n >> m;
    vi(n, arr);
    for (auto i : arr)
        q.push(i);
    ll sum = 0;
    while (m--)
    {
        if (q.top() < 0)
            sum += (q.top()) * (-1);
        q.pop();
    }
    cout << sum << endl;
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
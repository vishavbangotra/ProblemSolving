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

int solve()
{
    int t;
    cin >> t;
    pair<int, int> sp;
    pair<int, int> ep;
    sp = make_pair(0, 0);
    sp = make_pair(0, 0);
    cin >> sp.first >> sp.second >> ep.first >> ep.second;
    string wind;
    cin >> wind;
    int ans = 0;
    for (auto dir : wind)
    {
        if (sp == ep)
            return ans;
        if (dir == 'N' && sp.second < ep.second)
            sp.second += 1;
        if (dir == 'E' && sp.first < ep.first)
            sp.first += 1;
        if (dir == 'W' && sp.first > ep.first)
            sp.first -= 1;
        if (dir == 'S' && sp.second > ep.second)
            sp.second -= 1;
        ans++;
        if (sp == ep)
            return ans;
    }
    return -1;
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
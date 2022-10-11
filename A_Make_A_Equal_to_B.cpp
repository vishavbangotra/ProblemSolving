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
    int n;
    cin >> n;
    vi(n, a);
    vi(n, b);
    int td = 0, to = 0;
    for (auto i : a)
        if (i == 1)
            to++;

    for (auto i : b)
        if (i == 1)
            to--;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            td++;
    }
    to = abs(to);
    if (td == 0)
        if (to == 0)
            return 0;
        else
            return 1;
    else
    {

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                ans++;
        }
        return ans;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
    return 0;
}
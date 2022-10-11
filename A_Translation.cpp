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

bool solve()
{
    string s, r;
    cin >> s >> r;
    if (s.length() != r.length())
        return false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != r[s.length() - i - 1])
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    if (solve())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
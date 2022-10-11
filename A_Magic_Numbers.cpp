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

string solve(string s)
{
    if (s.length() == 0)
        return "YES";

    if (s[0] == '1')
    {
        if (s.length() > 1 && s[1] == '4')
        {
            if (s.length() > 2 && s[2] == '4')
                return solve(s.substr(3, s.length()));
            else
                return solve(s.substr(2, s.length()));
        }
        else
            return solve(s.substr(1, s.length()));
    }
    else
        return "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s = to_string(n);
    cout << solve(s) << endl;

    return 0;
}
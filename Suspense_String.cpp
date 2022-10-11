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

string solve()
{

    int n;
    cin >> n;
    string s, t = "";
    cin >> s;
    int lb = 0, ub = n - 1;
    while (lb <= ub)
    {
        if (s[lb] == '0')
        {
            t = "0" + t;
        }
        else
        {
            t += "1";
        }
        lb++;
        if (lb > ub)
            return t;
        if (s[ub] == '0')
        {
            t += "0";
        }
        else
        {
            t = "1" + t;
        }
        ub--;
    }
    return t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
    ;
    return 0;
}
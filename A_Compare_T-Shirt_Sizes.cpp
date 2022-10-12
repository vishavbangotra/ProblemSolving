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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    if (a[n - 1] == 'S')
    {
        if (b[m - 1] == 'M' || b[m - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else
        {
            if (a.size() > b.size())
                cout << "<" << endl;
            else if (a.size() < b.size())
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }
    else if (a[n - 1] == 'M')
    {
        if (b[m - 1] == 'M')
        {
            cout << '=' << endl;
        }
        else if (b[m - 1] == 'S')
        {
            cout << '>' << endl;
        }
        else
            cout << '<' << endl;
    }
    else
    {
        if (b[m - 1] == 'M' || b[m - 1] == 'S')
        {
            cout << '>' << endl;
        }
        else
        {
            if (a.size() < b.size())
                cout << "<" << endl;
            else if (a.size() > b.size())
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
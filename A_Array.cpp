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
    int num;
    cin >> num;
    vi(num, arr);
    vector<int> p, n, z;
    for (auto i : arr)
    {
        if (i < 0)
            n.push_back(i);
        else if (i > 0)
            p.push_back(i);
        else
            z.push_back(i);
    }
    if (p.size() == 0)
    {
        p.push_back(n[n.size() - 1]);
        p.push_back(n[n.size() - 2]);
        n.pop_back();
        n.pop_back();
    }
    if (n.size() % 2 == 0)
    {
        z.push_back(n[n.size() - 1]);
        n.pop_back();
    }
    cout << n.size() << " ";
    for (auto i : n)
        cout << i << " ";
    cout << endl;
    cout << p.size() << " ";
    for (auto i : p)
        cout << i << " ";
    cout << endl;
    cout << z.size() << " ";
    for (auto i : z)
        cout << i << " ";
    cout << endl;
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
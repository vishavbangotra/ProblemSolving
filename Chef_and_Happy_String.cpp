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
    string s;
    cin >> s;
    unordered_set<int> set;
    set.insert('a');
    set.insert('e');
    set.insert('i');
    set.insert('o');
    set.insert('u');
    int n = s.length();
    for (int i = 0; i < n - 2; i++)
    {
        if (set.find(s[i]) != set.end() && set.find(s[i + 1]) != set.end() && set.find(s[i + 2]) != set.end())
            return "Happy";
    }
    return "Sad";
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
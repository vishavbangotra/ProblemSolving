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
    int n;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> n;
        arr.push_back(temp);
    }
    int p = 0;
    for (auto i : arr)
    {
        if (i == arr[0])
            p++;
        else
            p--;
    }
    if (p > 0)
        cout << arr[0] << endl;
    else
    {
        for (auto i : arr)
            if (i != arr[0])
            {
                cout << i << endl;
                return;
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
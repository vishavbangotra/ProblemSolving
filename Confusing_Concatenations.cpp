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
    vi(n, arr);
    ll maxi = arr[0];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (maxi < arr[i])
        {
            flag = true;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
        return;
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[0])
        {
            temp = i;
            break;
        }
    }
    cout << temp << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << n - temp << endl;
    for (int i = temp; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
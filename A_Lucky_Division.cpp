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

bool checker(int n, int p)
{

    if (p > n)
        return false;
    if (n % p == 0)
        return true;
    else if (checker(n, p * 10 + 7) || checker(n, p * 10 + 4))
        return true;
    else

        return false;
}

void solve()
{
    int n;
    cin >> n;
    if (checker(n, 4) || checker(n, 7))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
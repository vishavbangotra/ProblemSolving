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

void search(vector<vector<char>> &mat, int i, int j, int n, int m)
{
    if ((i + 1 < n) && mat[i + 1][j] == 'P')
        mat[i + 1][j] = '.';
    else if ((i - 1 >= 0) && mat[i - 1][j] == 'P')
        mat[i - 1][j] = '.';
    else if ((j + 1 < m) && mat[i][j + 1] == 'P')
        mat[i][j + 1] = '.';
    else if ((j - 1 >= 0) && mat[i][j - 1] == 'P')
        mat[i][j - 1] = '.';
    else
        return;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat;
    for (int i = 0; i < n; i++)
    {
        vector<char> temp;
        for (int j = 0; j < m; j++)
        {
            char p;
            cin >> p;
            temp.push_back(p);
        }
        mat.push_back(temp);
    }
    ll numOfPigs = 0;
    for (auto i : mat)
        for (auto j : i)
            if (j == 'P')
                numOfPigs++;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'W')
                search(mat, i, j, n, m);
        }
    }
    for (auto i : mat)
        for (auto j : i)
            if (j == 'P')
                numOfPigs--;
    cout << numOfPigs << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
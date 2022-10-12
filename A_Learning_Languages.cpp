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

vector<int> parent(100000);
vector<int> rnk(100000);

void makeSet(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}
int findParent(int node)
{
    if (node == parent[node])
        return node;
    return parent[node] = findParent(parent[node]);
}

void createUnion(int u, int v)
{
    u = parent[u];
    v = parent[v];
    if (rnk[u] < rnk[v])
        parent[u] = v;
    else if (rnk[v] < rnk[u])
        parent[v] = u;
    else
    {
        parent[v] = u;
        rnk[u]++;
    }
}
void solve()
{
    int n, m;
    vector<vector<int>> emp;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> lang;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            lang.push_back(temp);
        }
    }
    makeSet(m + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ; j++)
        {
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
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

int main()
{

    return 0;
}
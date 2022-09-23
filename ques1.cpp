#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define uint64 unsigned long long int
#define uint32 long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int solve(int* prices, int size)
{
    int maxProfit = 0;
    for(int i=1; i<size; i++)
    	if (prices[i] > prices[i - 1]) 
    		maxProfit += prices[i] - prices[i - 1];
    return maxProfit;
}
  
int main()
{
    int n; cin>>n;
    int arr[n];
    for(auto &i:arr) cin>>i;

    cout << solve(arr, n) << endl;
    return 0;
}


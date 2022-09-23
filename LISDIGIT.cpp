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
int main() 
{ 
    TC
    {
        int n;
        cin>>n;
        vi arr(n), dp(n);
        for(auto &i: arr) cin>>i;
    	int p = 0;
    	dp[0] = 1;
    	for(int i=1; i<n; i++){
    		if(arr[i])
    	}
    }
    return 0; 
} 
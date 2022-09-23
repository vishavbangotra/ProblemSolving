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
    TC{
        int n; cin>>n;
        vi arr(n), dp(n);
        for(auto &i: arr) cin>>i;
    	int m = arr[n-1];
    	for(int i=n-1; i>=0; i--){
    		m = max(m, arr[i]);
    		if(m==0) dp[i] = 0;
    		else dp[i] = 1;
    		m--;
    	}
    	for(auto i: dp) cout<<i<<" ";
		cout<<endl;

    }
    return 0; 
} 
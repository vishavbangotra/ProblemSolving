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

int solve(vector<int> &frogs, vector<vector<int>> &dp, int i, int j, int &k){
	if(dp[i][j] == -1){
		if(abs(frogs[i]-frogs[j]) <= k) {
			dp[i][j] = 1;
			dp[j][i] = 1;
		}
		else{
			for(int k=0; k<n; k++){
				if()
			}
		}
	}
	return dp[i][j];
}

int main() 
{ 
    TC{
        uint32 n, k, p;
        cin>>n>>k>>p;
        vector<uint32> arr(n);
        for(auto &i: arr) cin>>i;
        vector<pair<uint32, uint32>> frogs(p);
    	for(int i=0; i<n; i++){
    		cin>>frogs[i].first>>frogs[i].second;
    	}
    	vector<vector<bool>> dp(n, vector<int> (n, false));
    	for(int i=0; i<n-1; i++){
    		for(int j=i+1; j<n; j++){

    		}
    	}
    }
    return 0; 
} 
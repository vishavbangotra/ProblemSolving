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
        uint32 n;
        cin>>n;
        vector<uint32> arr(n), dp(n, 0);
        dp[0] = 1;
        for(auto &i: arr) cin>>i;
    	uint32 currLen = 1;			
        for(int i=1; i<n; i++){
        	if(arr[i] >= arr[i-1]){
        		dp[i] = (currLen + 1) + dp[i-1];
        		currLen++;
        	}
        	else{
        		dp[i] = dp[i-1] + 1;
        		currLen = 1;
        	}
        }
        cout<<dp[n-1]<<endl;
    }
    return 0; 
} 
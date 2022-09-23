#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long int
#define ll long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    TC{
        string s;
        cin>>s;
        int n = s.length();
        bool desc = false;
        vector<pair<int, int>> dp;
        if(s[0] > s[n-1]) desc = true;
        int lb = s[0] - 'a'+1;
        int ub = s[n-1] - 'a' +1;
        if(lb > ub) swap(lb, ub);
        for(int i=1; i<n-1; i++){
        	if(s[i]-'a'+1 <= ub && s[i]-'a'+1 >= lb)
        		dp.push_back(make_pair(s[i]-'a'+1, i+1));
        }
        vector<int> res;
        res.push_back(1);
        if(desc){
        	sort(dp.begin(), dp.end(), greater<pair<int, int>>());
	        ub = s[0] - 'a' + 1; 
	        for(int i=0; i<dp.size(); i++){
	        	if(dp[i].first <= ub){
	        		ub = dp[i].first;
	        		res.push_back(dp[i].second);
	        	}
	        }
        }
        else{
        	sort(dp.begin(), dp.end());
        	lb = s[0] - 'a' + 1; 
	        for(int i=0; i<dp.size(); i++){
	        	if(dp[i].first >= lb){
	        		lb = dp[i].first;
	        		res.push_back(dp[i].second);
	        	}
	        }
        }
        res.push_back(n);
        cout<<abs(s[0] - s[n-1])<<" "<<res.size()<<endl;
        for(auto i: res) cout<<i<<" ";
    	cout<<endl;
    }
    return 0; 
} 
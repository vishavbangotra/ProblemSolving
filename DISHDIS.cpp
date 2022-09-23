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
        int n, m; 
        cin>>n>>m;
        vector<pair<int, int>> arr(m);
        for(int i=0; i<m; i++){
        	cin>>arr[i].first>>arr[i].second;
        }
        int k = n;
    	for(auto i: arr){
    		k -= i.first;
    	}
    	if(k < 0){
    		cout<<0<<endl;
    	}
    	else if(k == 0){
    		cout<<1<<endl;
    	}
    	else{
    		int ans = 1;
    		for(auto i: arr){
    			ans *= (i.second - i.first);
    		}
    		cout<<ans<<endl;
    	}

    }
    return 0; 
} 
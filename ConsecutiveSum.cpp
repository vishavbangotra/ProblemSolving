#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#include<queue>
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
        int n, k;
        cin>>n>>k;
        vector<ll> arr(n);
        for(auto &i: arr) cin>>i;
    	vector<ll> sums(k);
    	for(int i=0; i<n; i++){
    		int temp = (i+1)%k;
    		sums[temp] = max(sums[temp], arr[i]);
    	}
		ll res =0;
		for(auto i: sums) res += i;
		cout<<res<<endl;
    }
    return 0; 
} 
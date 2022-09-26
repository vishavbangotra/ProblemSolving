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

void solve(){
	int n, k;cin>>n>>k; 	
	vector<ll> arr(n);
	for(auto &i: arr) cin>>i;
	sort(arr.begin(), arr.end());
	int start = 0;
	ll ans = LONG_MAX;
	for(int i=k-1; i<n; i++){
		ans = min(ans, arr[i] - arr[start++]);
	}
	cout<<ans<<endl;
}

int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
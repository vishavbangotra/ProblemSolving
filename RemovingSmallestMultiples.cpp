#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long
#define ll long long
#define TC int tc;cin>>tc;while(tc--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 

void solve(){
	ll n;
	cin>>n; 
	string t; 
	cin>>t;
	vector<bool> a(n+1, false);
	for(int i=1; i<=n; i++){
		a[i] = (t[i-1] == '1');
	}
	ll ans = 0;
	vector<int> cost(n+1);
	for(int i=n; i>=1; i--){
		for(int j=i; j<=n; j+=i){
			if(a[j]) break; 
			cost[j] = i;
		}
	}
	for(int i=1; i<=n; i++){
		if(!a[i]) ans += cost[i];
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
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
	int n;
	cin>>n;
	vector<ll> arr(n);
	for(auto &i: arr) cin>>i;
	sort(arr.begin(), arr.end());
	ll p = LONG_MAX;
	for(int i=0; i<n-2; i++){
		p =  min(p, abs(arr[i] - arr[i+1]) + abs(arr[i+1] - arr[i+2]));
	}
	cout<<p<<endl;

}

int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
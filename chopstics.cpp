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
int main() {
	uint32 n, d;
	cin>>n>>d;
	vector<uint32> arr(n);
	for(auto &i: arr) cin>>i;
	sort(arr.begin(), arr.end());
	uint32 ans =0;
	for(int i=0; i<n-1; i++){
	    if(abs(arr[i]-arr[i+1]) <= d){
	        i++;
	        ans++;
	    }
	}
	cout<<ans<<endl;;
	return 0;
} 
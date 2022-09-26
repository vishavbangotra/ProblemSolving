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
	int n;cin>>n; 	
	vector<ll> arr(n);
	for(auto &i: arr) cin>>i;
	if(n==1) {
		cout<<0<<endl;
		return;
	}
	int m = 1;

	vector<pair<int, int>> lr;
	if((arr[0] + arr[n-1]) % 2 == 0){
		arr[0] = arr[n-1];
	}
	else{
		arr[n-1] = arr[0];
	}
	lr.push_back(make_pair(1, n));
	for(int i=1; i<n-1; i++){
		m++;
		if((arr[i]+arr[0]) % 2 ==0 ){
			lr.push_back(make_pair(i+1, n));
		}
		else{
			lr.push_back(make_pair(1, i+1));
		}
		arr[i] = arr[0];
	}
	cout<<m<<endl;
	for(auto i: lr){
		cout<<i.first<<" "<<i.second<<endl;
	}
}

int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
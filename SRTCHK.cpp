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
    vector<int> a(n), b(n);
    for(auto &i: a) cin>>i;
	for(auto &i: b) cin>>i;
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++){
		if(a[i] != b[i]) {
			cout<<"no"<<endl;
			return;
		}
	}
	cout<<"yes"<<endl;
}

int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
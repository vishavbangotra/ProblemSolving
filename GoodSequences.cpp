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
int gcd(int a, int b){
	if(a==0) return b;
	return gcd(b % a, a);
}

int main() 
{ 
    
       int n; cin>>n;
       vector<int> a(n);
       for(auto &i: a) cin>>i;
       	// for(auto i: a) cout<<i<<endl;
       int ans = 0, tans=0;
       for(int i=0; i<n-1; i++){
       		if(a[i] < a[i+1] && gcd(a[i], a[i+1]) > 1){
       			tans++;
			}
			else{
				ans = max(ans, tans);
				tans = 0;
			}
			cout<<gcd(a[i], a[i+1])<<" "<<tans<<" "<<ans<<endl;;
       }
       ans = max(tans, ans);
       // cout<<ans<<endl;
    return 0;
} 
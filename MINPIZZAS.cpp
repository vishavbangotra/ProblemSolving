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

uint32 gcd(uint32 a, uint32 b){
    if(a==0) 
    	return b;
    return gcd(b%a, a);
}

int main() {
	int t; cin>>t;
	while(t--){
	    uint32 n, k;
	    cin>>n>>k;
	   	cout<<n/gcd(n, k)<<endl;
	}
	return 0;
}
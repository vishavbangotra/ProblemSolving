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
        int n; cin>>n;
        unordered_map<uint64, uint64> freq;
        vector<uint64> a(n);
        for(auto &i: a) cin>>i;
    	for(auto i: a)
    		freq[i]+=1;
    	uint64 ans=0;
    	for(auto i: freq){
    		uint64 num = i.second;
    		ans += num * (num-1)/2;
    	}
    	cout<<ans<<endl;


    }
    return 0; 
} 
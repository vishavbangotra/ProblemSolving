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
        int x, n;
        cin>>n>>x;
        vector<uint64> arr(n);
        for(auto &i: arr) cin>>i;
    	unordered_set<uint64> set;
    	for(auto i: arr) set.insert(i);
		int p = set.size();
		cout<<min(p, n-x)<<endl;
    }
    return 0; 
} 
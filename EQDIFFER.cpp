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
        vector<uint32> arr(n);
        for(auto &i: arr) cin>>i;
        int mc=0;
        unordered_map<uint32, int> map;

        for(auto i: arr) {
        	map[i]++;
        	mc= max(map[i], mc);
        }
        if(n==1) cout<<0<<endl;
        else cout<<min(n-mc, n-2)<<endl;
    }
    return 0; 
} 
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
        int n, k;
        cin>>n>>k;
        vector<pair<int, int>> e(k);
        for(int i=0; i<k; i++){
        	cin>>e[i].first>>e[i].second;
        }
        unordered_map<int, vector<int>> mp;
        for(auto i: e){
        	mp[i.first].push_back(i.second);
        }
        unordered_set<int> heads;
        for(auto i: mp){
        	if(i.second > 1) heads.insert(i.first);
        }
        for(auto i: heads){
        	mp[i]
        }
    }
    return 0; 
} 
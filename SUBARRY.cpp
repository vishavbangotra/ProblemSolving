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
        vector<uint32> a(n);
        for(auto &i: a) cin>>i;
    	uint32 mini=LLONG_MAX, maxi=LLONG_MIN;
    	for(auto i: a){
    		mini = min(mini, i);
    		maxi = max(maxi, i);
    	}
    	uint32 minit = mini;
    	if(minit < 0){
    		if(maxi <= 0){
    			mini = maxi * maxi;
    		}
    		else mini = mini * maxi;
    	}
    	else{
    		mini = mini * mini;
    	}
    	if(maxi < 0){
    		maxi = minit * minit;
    	}
    	else{
    		maxi = max(maxi*maxi, minit*minit);
    	}
    	cout<<mini<<" "<<maxi<<endl;
    }
    return 0; 
} 
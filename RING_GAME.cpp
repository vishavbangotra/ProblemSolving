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
        vi arr(n);
        for(auto &i: arr) cin>>i;
    	int ones=0, zeros=0, groups=0;
    	for(int i=0; i<n; i++){
    		if(arr[i] == 1) ones++;
    		else zeros++;
    	}
    	for(int i=0; i<n-1; i++){
    		if(arr[i] != arr[i+1]){
    			groups++; i++;
    		}
    	}
    	if(((ones+zeros)/2 - groups)%2 == 0) cout<<((ones+zeros)/2)<<" "<<groups<<" Bob"<<endl;
    	else cout<<((ones+zeros)/2)<<" "<<groups<<" Alice"<<endl;

    	

    }
    return 0; 
} 
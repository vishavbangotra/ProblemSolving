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

        vector<uint64> arr(10);
        for(auto &i: arr) cin>>i;
    	uint64 k; cin>>k;
    	for(int i=9; i>=0; i--){
    		if(arr[i] == 0) continue;
    		if(k < arr[i]) {
    			cout<<i+1<<endl;
    			break;
			}
			else
				k-= arr[i];
    	}
    }
    return 0; 
} 
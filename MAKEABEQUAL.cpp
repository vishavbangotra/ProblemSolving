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
        int n;
        cin>>n;
        vector<uint32> a(n), b(n);
        for(auto &i: a) cin>>i;
    	for(auto &i: b) cin>>i;
		uint64 count = 0, asum=0, bsum=0;

    	for(int i=0; i<n; i++){
    		asum += a[i];
    		bsum += b[i];
    		count += abs(a[i] - b[i]);
    	}
    	if(asum != bsum) cout<<-1<<endl;
    	else cout<<count/2<<endl;


    }
    return 0; 
} 
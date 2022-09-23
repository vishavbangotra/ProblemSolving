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
    // TC{
        int n, k;
        cin>>n>>k;
        vi a(n), b(n);
        for(auto &i: a) cin>>i;
    	for(auto &i: b) cin>>i;
    	int ans = 0;
		while(k > 0){
			for(int i=0; i<n; i++){
				if(b[i] >= a[i])
					b[i] -= a[i];
				else{
					if(b[i] + k >= a[i]){
						k -= a[i] - b[i]; 
						b[i] = 0;
					}
					else goto result;
				}
			}
			ans++;
		}
		result:
		cout<<ans<<endl;
    return 0; 
} 
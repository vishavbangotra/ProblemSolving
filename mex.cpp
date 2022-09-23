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
        unordered_set<int> s;
        vi arr(n);
        for(auto &i: arr) cin>>i;
        for(auto i: arr) s.insert(i);
        int maxi = 0;
    	for(auto i: s) maxi = max(maxi, i);
		for(int i=0; i<maxi; i++){
			if(s.find(i) == s.end()){
				if(k==0) {
					cout<<i<<endl;
					goto label;
				}
				else k--;
			}
		}
		cout<<maxi+max(k+1, 1)<<endl;
		label:;

    }
    return 0; 
} 
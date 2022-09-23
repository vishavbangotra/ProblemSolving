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
        vector<uint64> a(n), b(n);
        for(auto &i: a) cin>>i;
    	for(auto &i: b) cin>>i;
		unordered_map<uint64, uint64> amap, bmap;
		for(auto i: a) amap[i] += 1;
		for(auto i: b) bmap[i] += 1;
		uint64 ans = 0;
		//pairing and deleting duplicates
		for(int i=0; i<n; i++){
			if(bmap.find(a[i]) != bmap.end()){
				if(amap[a[i]] >= bmap[a[i]]){
					amap[a[i]] -= bmap[a[i]];
					bmap[a[i]] = 0;
				}
				else{
					bmap[a[i]] -= amap[a[i]];
					amap[a[i]] = 0;
				}
			}
		}
		//apply operation on i: num if(log10(i) + 1 > 1)
		for(auto i: amap){
			uint64 num = i.first;
			if(num > 9){
				amap[log10(num) + 1] = i.second;
				ans += i.second;
				amap[num] = 0;
			}
		}
		for(auto i: bmap){
			uint64 num = i.first;
			if(num > 9){
				bmap[log10(num) + 1] = i.second;
				ans += i.second;
				bmap[num] = 0;
			}
		}
		
		//again pairing and deletion
		for(auto i: amap){
			uint64 num = i.first;
			if(bmap.find(num) != bmap.end()){
				if(bmap[num] > amap[num]){
					bmap[num] -= amap[num];
					amap[num] = 0;
				}
				else{
					amap[num] -= bmap[num];
					bmap[num] = 0;
				}
			}
		}


		for(auto i: amap)
			if(i.first != 1) ans += i.second;
		for(auto i: bmap)
			if(i.first != 1) ans += i.second;
		
		cout<<ans<<endl;
    }
    return 0; 
} 
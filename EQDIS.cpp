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
		unordered_map<int, int> map;
		for(auto i: arr){
			map[i] += 1;
		}
		if(map.size()%2 == 0){
			cout<<"YES"<<endl;
		}
		else{
			for(auto i: map){
				if(i.second >= 2){
					cout<<"YES"<<endl;
					goto label;
				}
			}
			cout<<"NO"<<endl;
		}
		label:;
    }
    return 0; 
} 
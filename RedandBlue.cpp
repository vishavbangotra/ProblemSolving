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
        int n;cin>>n;
        vi r(n);
        for(auto &i: r) cin>>i;
    	int m;cin>>m;
    	vi b(m);
    	for(auto &i: b) cin>>i;
		int m1=0, t1=0, m2=0, t2=0;
		for(auto i: r){
			t1 += i;
			m1 = max(m1, t1);
		}
		for(auto i: b){
			t2 += i;
			m2 = max(m2, t2);
		}
		cout<<m1+m2<<endl;
    }
    return 0; 
} 
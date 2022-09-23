#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#include<float.h>
#define uint64 unsigned long long int
#define uint32 long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int solve(long double n){
	if(floor(log2(n)) == log2(n)) return 0;
	return 1 + solve(n - pow(2, floor(log2(n))));
}
int main() 
{ 
    TC{
        long double n; cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0; 
} 
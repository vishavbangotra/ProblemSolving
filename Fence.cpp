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
    int n, k, sum=0, tsum=0, start=0, ans=0; cin>>n>>k;
    vi h(n);
    for(auto &i: h) cin>>i;
    for(int i=0; i<k; i++){
        tsum += h[i];
    }
    sum = tsum;
    for(int i=k; i<n; i++){
        tsum += h[i] - h[start++];
        if(tsum < sum){
            ans = start;
            sum = tsum;
        }
    }
    cout<<ans+1<<endl;
    return 0; 
} 
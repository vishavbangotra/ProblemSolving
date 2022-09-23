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
        uint64 a, b, p, q;
        cin>>a>>b>>p>>q;
        if(p%a != 0 || q%b != 0) cout<<"NO"<<endl;
        else {
        	if(p/a == q/b || p/a == q/b - 1) cout<<"YES"<<endl;
        	else cout<<"NO"<<endl;
        }
    }
    return 0; 
} 
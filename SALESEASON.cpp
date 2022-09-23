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
        int x; cin>>x;
        if(x <= 100) cout<<x<<endl;
        else if(x <= 1000) cout<<x-25<<endl;
        else if(x <= 5000) cout<<x-100<<endl;
        else cout<<x-500<<endl;
    }
    return 0; 
} 
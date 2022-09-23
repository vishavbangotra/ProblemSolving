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
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        if(w == x || w == y || w == z || w == x + y || w == y + z ||
        	w == x + z || w == x + y + z){
        	cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0; 
} 
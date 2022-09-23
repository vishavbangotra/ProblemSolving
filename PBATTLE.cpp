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
        vector<pair<uint64, int>> a, b;
        for(int i=0; i<n; i++){
        	uint64 temp; 
        	cin>>temp;
        	a.push_back(make_pair(temp, i+1));
        }
        for(int i=0; i<n; i++){
        	uint64 temp; 
        	cin>>temp;
        	b.push_back(make_pair(temp, i+1));
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        


        cout<<ans<<endl;

    }
    return 0; 
} 
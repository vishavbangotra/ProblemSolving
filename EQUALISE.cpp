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
        int a, b;
        cin>>a>>b;
        if(a > b) swap(a, b);
        int p =0;
        while(a <= b){
        	if(a == b) {
        		cout<<"YES"<<endl;
        		goto label;
        	}
        	else a *=2;
        }
        cout<<"NO"<<endl;
        label:;
    }
    return 0; 
} 
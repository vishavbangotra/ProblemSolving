#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long int
#define ll long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
// void solve()
int main() 
{ 
    TC{
        int n;cin>>n; 	
        vector<int> arr(n);
        for(auto &i: arr) cin>>i;
    	int neg = 0;
    	for(auto i: arr) {
    		if(i<0){
    			neg++;
    		}
    		if(i==0){
    			cout<<0<<endl;
    			goto out;
    		}
    	}
    	if(neg%2 == 0){
    		cout<<0<<endl;
    	}
    	else{
    		cout<<1<<endl;
    	}
    	out:;

    }
    return 0; 
} 
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
int main() 
{ 
    TC{
        int n;
        cin>>n; 
        vector<int> arr(n);
    	for(int i=0; i<n-1; i++){
    		arr[i] = i+2;
    	}
    	arr[n-1] = 1;
    	for(auto i: arr) cout<<i<<" "; cout<<endl;
    }

    return 0; 
} 
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
        int n, m, x;
        cin>>n>>m>>x;
        vector<int> arr(n);
        for(auto &i:arr) cin>>i;
    	vector<int> res;
    	int k = 0;
    	for(int i=n-1; i>=0; i--){
    		if(arr[i] >= m){
    			res.push_back(i+1);
    			k++;
    		}
    	}
    	int i=n-1;
    	while(k < x){
    		if(arr[i] < m){
    			res.push_back(i+1);
    			k++;
    		}
    		i--;
    	}
    	sort(res.begin(), res.end());
    	cout<<k;
    	for(auto i: res){
    		cout<<" "<<i;
    	}
    	cout<<endl;

    }
    return 0; 
} 
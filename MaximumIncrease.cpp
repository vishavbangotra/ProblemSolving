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
    int n; cin>>n;
    vi arr(n);
    for(auto &i: arr) cin>>i;
	int tans = 1, ans =1;
	for(int i=1; i<n; i++){
		if(arr[i] > arr[i-1])tans++;
		else tans = 1;
		ans = max(ans, tans);
	}
	cout<<ans<<endl;
    return 0; 
} 
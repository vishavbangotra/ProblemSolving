#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define uint64 unsigned long long int
#define uint32 long long int
#define TC int t; cin>>t; while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    string s; cin>>s;
    int n = s.length(), temp=0; 
    vector<int> left(n, 0), right(n, 0);

    for(int i=0; i<n; i++){
    	if(s[i] == 'Q')
    		temp ++;
    	left[i] = temp;
    }
    temp=0;
    for(int i=n-1; i>=0; i--){
    	if(s[i] == 'Q')
    		temp++;
		right[i] = temp;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
    	if(s[i] == 'A'){
    		ans += left[i] * right[i];
    	}
    }
    cout<<ans<<endl;
    return 0; 
} 
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

void solve(){
	int n;cin>>n;
	vector<vector<int>> arr;
	for(int i=0; i<n; i++){
		vector<int> tarr;
		for(int j=0; j<=i; j++){
			if(j==0 || j==i){
				tarr.push_back(1);
			}
			else tarr.push_back(0);
		}
		arr.push_back(tarr);
	}	
	for(auto i: arr){
		for(auto j: i){
			cout<<j<<" ";
		}cout<<endl;
	}
}
int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
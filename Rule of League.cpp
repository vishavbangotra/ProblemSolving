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
         ll n, x, y;
         cin>>n>>x>>y;
         if((x!=0 && y!=0) || (x==0 && y==0)){
         	cout<<-1<<endl;
         }
         else{
         	vector<ll> res;
         	ll x = max(x, y);
         	ll temp = (n-1)%x;
         	if(temp == 0){
         		temp = (n-1)/x;
         		ll p=1;
         		while(temp--){
         			for(int i=0; i<+x; i++){
         				res.push_back(p);
         			}
         		}
         		for(auto i: res) cout<<i<<" ";
     			cout<<endl;
         	}
         	else{
         		cout<<-1<<endl;
         	}
         }
    }
    return 0; 
} 
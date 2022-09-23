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
         ll m = max(x, y);
         if((x!=0 && y!=0) || (x==0 && y==0)){
         	cout<<-1<<endl;
         }
         else if((n-1)%m == 0){
         	vector<ll> res;
         	ll m = max(x, y); // non zero of x and y
     		ll p=1, c=0;
     		for(int i=2; i<=n; i++){
     			c++;
     			res.push_back(p);
     			if(c==m){
     				c=0;
     				p=i+1;
     			}
     		}
     		for(auto i: res) cout<<i<<" ";
 			cout<<endl;
     	}
     	else{
     		cout<<-1<<endl;
     	}
    }
    return 0; 
} 
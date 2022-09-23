#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ll long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    TC{
       ll a, b, c;
       cin>>a>>b>>c;
       if(a-1 > c-1 + abs(b-c)){
       	cout<<2<<endl;
       }
       else{
       	if(a-1 < c-1 + abs(b-c)){
       		cout<<1<<endl;
       	}
       	else cout<<3<<endl;
       }
    }
    return 0; 
} 
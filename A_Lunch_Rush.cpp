#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long
#define ll long long
#define foreach(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define array(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    ll n, k;
    cin>>n>>k;
    vector<pair<ll, ll> > arr;
    for(int i=0; i<n; i++){
        ll a, b;
        cin>>a>>b;
        arr.push_back(make_pair(a, b));
    } 
    ll maxi= LLONG_MIN;
    for(auto i: arr){
        ll f, t;
        f = i.first;
        t = i.second;
        maxi = max(maxi, min(f-(t-k), f));
    }
    cout<<maxi<<endl;
}
int main() 
{ 
    // cout<<fixed<<endl;
    // cout<<setprecision(12);
    solve();
    return 0; 
} 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long
#define ll long long
#define TC int tc;cin>>tc;while(tc--)
#define foreach(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define loop(i, n) for(ll i=0; i<n; i++)
#define arr(i, n) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

bool isPossible(vector<ll> &arr, ll k, ll h){
    for(int i=0; i<arr.size(); i++)
        h-= ceil((double)arr[i]/k);
    if(h>=0) return true;
}

ll search(vector<ll> &arr, ll ub, ll lb, ll h){
    if(lb >= ub)
        return (isPossible(arr, ub, h) ? ub : lb);

    ll mid = (ub +lb)/2;
    if(isPossible(arr, mid, h))
        return search(arr, mid, lb, h);
    return search(arr, ub, mid+1, h);
}

void solve(){
    ll n, h;
	cin>>n>>h; 
	arr(i, n);
	//finding biggest and smallest pile to add binary search between those two bounds
	ll lb = LONG_MAX, ub = LONG_MIN;
    loop(i, n){
        lb = min(lb, arr[i]);
        ub = max(ub, arr[i]);
    }
    cout<<search(arr, ub, lb, h)<<endl;

}
int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
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
#define loop(i, n) for(int i=0; i<n; i++)
#define getarr(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 


ll createPairs(vector<ll> &a, vector<ll> &b, ll i, ll j){
    if(j>b.size()) return -1;
    if(j==b.size())
        return 0;
    if(i>=a.size())
        return (b.size() - j)/2;
    if(a[i] + b[j] >= 0)
        return 1 + createPairs(a, b, i+1, j+1);
    else return 1 + createPairs(a, b, i, j+2);

}
void solve(){
    ll n; cin>>n;
    getarr(i, n, x);
    getarr(i, n, y);
    vector<ll> neg, pos;
    loop(i, n){
        if(y[i] - x[i] >=0){
            pos.push_back(y[i]-x[i]);
        }
        else{
            neg.push_back(y[i]-x[i]);
        }
    }
    // cout<<pos.size()<<endl;
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
    reverse(neg.begin(), neg.end());

    cout<<createPairs(neg, pos, 0, 0)<<endl;;
}
int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
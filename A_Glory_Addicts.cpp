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



ll sum(vector<ll> a, int start, int end){
    ll res = 0;
    for(int i=start; i<=end; i++){
        res += a[i];
    }
    return res;
}
void solve(){
    int nn; cin>>nn;
    array(i, nn, type);
    array(i, nn, arr);
    vector<ll> high;
    vector<ll> low;

    for(int i=0; i<nn; i++){
        if(type[i] == 0){
            low.push_back(arr[i]);
        }
        else{
            high.push_back(arr[i]);
        }
    }
    sort(high.begin(), high.end(), greater<int>());
    sort(low.begin(), low.end(), greater<int>());

    ll ans = 0;
    ll n = high.size(), m = low.size();
    if(m>n) swap(high, low);
    if(low.size() == 0){
        ans = sum(high, 0, high.size()-1);
    }
    else{
        if(m==n){
            if(low[m-1] > high[n-1]){
                swap(low[m-1], high[n-1]);
            }
            ans += low[m-1] + sum(high, 0, m-1)*2 + sum(low, 0, m-2)*2 + sum(high, m, n-1);
        }
        else{
            ans += high[high.size()-1] + sum(low, 0, low.size()-1)*2 + sum(high, 0, low.size()-1)*2 + sum(high, low.size(), high.size()-2); 
        }
    }
    cout<<ans<<endl;
}
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0; 
} 
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
    ll n;
    cin>>n;
    ll x;
    x = (n-4)/3;
    ll a = (x-1);
    ll b = ((n-4-x) - x);
    ll c = (n-4-x-1);
    if(n <= 12) cout<< min(min(a, b), c) + 1<<endl;
    else 
    cout<<min(min(a, b), c)<<endl;

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
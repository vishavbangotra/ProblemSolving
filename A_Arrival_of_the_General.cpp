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
    int n; cin>>n;
    array(i, n, arr);
    ll mini=LONG_MAX, maxi=LONG_MIN, mi=0, mxi=0;
    for(int i=0; i<n; i++){
        if(mini >= arr[i]){
            mi = i;
            mini = arr[i];
        }
        if(maxi < arr[i]){
            maxi = arr[i];
            mxi = i;
        }
    }
    ll ans = mxi;
    ans += n-1 - mi;
    if(mi > mxi){
        cout<<ans<<endl;
    }
    else{
        cout<<ans-1<<endl;
    }
}
int main() 
{ 
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0; 
} 
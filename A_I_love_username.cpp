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
    int n;
    cin>>n;
    array(i, n, arr);
    ll mini = arr[0], maxi = arr[0], ans =0;
    for(int i=1; i<n; i++){
        if(arr[i] > maxi || arr[i] < mini){
            ans++;
            maxi = max(arr[i], maxi);
            mini = min(arr[i], mini);
        }
    }
    cout<<ans<<endl;
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
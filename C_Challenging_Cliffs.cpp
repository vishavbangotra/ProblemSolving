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
    sort(arr.begin(), arr.end());
    ll mini1=0, mini2=LONG_MAX, index1=0, index2=0;
    for(int i=0; i<n-1; i++){
        if(abs(arr[i+1]-arr[i]) < abs(mini2-mini1)){
            mini1 = arr[i+1];
            mini2 = arr[i];
            index1 = i+1;
            index2 = i;
            
        }
    }
    vector<ll> res;
    if(mini1 > mini2) swap(mini1, mini2);
    res.push_back(mini1);
    ll rb=n-1, lb=0;
    while(lb<rb){
        if(lb == index1){
            
        }
    }
    res.push_back(mini2);
    for(auto i: res) cout<<i<<" "; cout<<endl;
    
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
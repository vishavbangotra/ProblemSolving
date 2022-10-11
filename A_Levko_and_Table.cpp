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
    int n, k;
    cin>>n>>k;
    vector<vector<int>> m(n, vector<int>(n, 0));
    if(k==1000){
        for(int i=0; i<n; i++){
            m[i][i] = 500;
        }
        for(int i=0; i<n; i++){
            m[i][n-i-1] += 500;
        }
    }
    else{
        for(int i=0; i<n; i++){
            m[i][i] = k;
        }
    }
    for(auto i: m){
        for(auto j: i) cout<<j<<" ";cout<<endl;
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
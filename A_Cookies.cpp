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
#define arr(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    int n; cin>>n;
    arr(i, n, arr);
    ll sum =0, o=0, e=0;
    for(auto i: arr){
        sum += i;
        if((i&1) == 0) e++;
        else o++;
    }
    if((sum&1) == 1){
        cout<<o<<endl;
    }
    else{
        cout<<e<<endl;
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
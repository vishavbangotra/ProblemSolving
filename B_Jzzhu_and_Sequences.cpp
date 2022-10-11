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


bool find(vector<int> &arr, int i){
    if(arr[i] == i){
        return false;
    }
    return find(arr, arr[i]);
}
void solve(){
    int n;
    vector<int> arr(n+1);
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        arr[a] = b;
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        if(!find(arr, i)){
            ans+=1;
        }
    }
    cout<<ans<<endl;
}
int swim(int c, vector<int> p){
    
}
int main() 
{ 
    int t;
    // cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0; 
} 
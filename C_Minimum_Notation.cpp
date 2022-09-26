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
#define array(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    string s;
    cin>>s;
    vector<int> arr;
    int mini = 9;
    for(auto i: s){
        arr.push_back(i-'0');
    }
    for(int i=s.length()-1; i>=0; i--){
        if(arr[i] <= mini){
            mini = arr[i];
        }
        else{
            arr[i] = min(arr[i] + 1, 9);
        }
    }
    sort(arr.begin(), arr.end());
    for(auto i: arr) cout<<i; cout<<endl;
    
}
int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
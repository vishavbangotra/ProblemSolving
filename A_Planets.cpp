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
// #define arr(i, n) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> arr(101);
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr[temp] += 1;
    }
    int ans = 0;
    for(auto i: arr){
        if(i!=0){
            ans += min(i, c);
        }
    }
    cout<<ans<<endl;
}
int main() 
{ 
    TC{
        solve();
    }
    return 0; 
} 
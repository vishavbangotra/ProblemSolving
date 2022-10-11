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
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    for(int i=0; i<n-1; i++){
        if(s[i] == 'B' && s[i+1] == 'G') {
            swap(s[i], s[i+1]);
            i++;
        }
    }
    cout<<s<<endl;
    
}
int main() 
{ 
    solve();
    return 0; 
} 
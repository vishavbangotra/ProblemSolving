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
    vector<pair<int, int>> pairs;
    for(int i=0; i<n; i++){
        int a, g;
        cin>>a>>g;
        pairs.push_back(make_pair(a, g));
    }
    string res="";
    ll suma = 0, sumb=0;
    for(auto pair: pairs){
        if(abs(suma + pair.first - sumb) <= 500){
            res += "A";
            suma += pair.first;
        }
        else {
            res += "G";
            sumb += pair.second;
        }
    }
    if(abs(suma-sumb) > 500) cout<<-1<<endl;
    else cout<<res<<endl;

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
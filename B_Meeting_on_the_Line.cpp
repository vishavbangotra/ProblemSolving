#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<math.h>
#include<iomanip> 
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long
#define ll double
#define TC int tc;cin>>tc;while(tc--)
#define foreach(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define array(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    int n;
    cin>>n;
    array(i, n, x);
    array(i, n, t);
    double maxima=-2e8, minima=2e8;
    for(int i=0; i<n; i++){
        maxima = max(maxima, x[i]+t[i]);
        minima = min(minima, x[i]-t[i]);
    }
    cout<<(maxima+minima)/2.0<<endl;
}
int main() 
{ 
    TC{
        cout<<fixed;
        cout<<setprecision(10);
        solve();
    }
    return 0; 
} 
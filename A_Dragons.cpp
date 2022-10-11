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

bool solve(){
    int s, n;
    cin>>s>>n;
    vector<pair<ll, ll>> p;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        p.push_back(make_pair(x, y));
    }
    sort(p.begin(), p.end());
    for(int i=0; i<n; i++){
        if(s > p[i].first){
            s+=p[i].second;
        }
        else return false;
    }
    return true;

}
int main() 
{ 
    int t;
    t=1;
    while(t--)
    {
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0; 
} 
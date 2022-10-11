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
    vector<pair<int, int>> pq;
    for(int i=0; i<n; i++){
        int p, q;
        cin>>p>>q;
        pq.push_back(make_pair(p, q));
    }
    sort(pq.begin(), pq.end());
    int maxi = pq[0].second, index=0;
    for(int i=1; i<n; i++){
        if(maxi > pq[i].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
        else{
            maxi = max(maxi, pq[i].second);
        }
    }
    cout<<"Poor Alex"<<endl;

    
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
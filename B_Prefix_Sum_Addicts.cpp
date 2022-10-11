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
    int n, k;
    cin>>n>>k;
    array(i, k, p);
    vector<ll> arr(n);
    ll mini = LONG_MAX;
    for(int i=k-1; i>0; i--){
        if(mini < p[i]-p[i-1]) return false;
        else mini = p[i]-p[i-1];
    }
    if(n==k && mini < p[0]) return false;
    if()
    return true;

}
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        if(solve())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0; 
} 
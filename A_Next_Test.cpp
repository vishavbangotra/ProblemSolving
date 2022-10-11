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

int solve(){
    int n;
    cin>>n;
    array(i, n, arr);
    unordered_set<int> set;
    for(auto i: arr) set.insert(i);
    for(int i=1; i<=3001; i++){
        if(set.find(i) == set.end()) return i;
    }
    return 0;
}
int main() 
{ 
    int t;
    t = 1;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0; 
} 
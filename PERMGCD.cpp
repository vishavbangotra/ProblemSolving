#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define uint64 unsigned long long int
#define uint32 long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
void solve(int x, int n){
    if(x < n) {
        cout<<-1<<endl;
        return;
    }
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    if(x==n){
        for(auto i: arr) cout<<i<<" ";
        cout<<endl;
        return;
    }
    int p = x-n;
    swap(arr[0], arr[1]);
    swap(arr[0], arr[p]);
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
int main() 
{ 
    TC{
        int n; cin>>n;
        int x; cin>>x;
        solve(x, n);
        
    }
    return 0; 
} 
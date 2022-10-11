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
    // cout<<0<<endl;
    if(n<=10 || n>=22) {
        cout<<0<<endl;
        return ;
    }
    else{
        if(n<=19 || n==21){
            cout<<4<<endl;

        }
        else if(n<=20){
            cout<<15<<endl;
        }
     
    }
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
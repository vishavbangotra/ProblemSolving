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

char upper(char a){
    if(a >= 97) return a-32;
    return a;
}

int solve(){
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
        if(upper(a[i]) > upper(b[i])) {
            return 1;
        }
        else if(upper(a[i]) < upper(b[i])) {
            return -1;
        }
    }
    return 0;
}
int main() 
{ 
    int t;
    t=1;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0; 
} 
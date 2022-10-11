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
    string s;
    cin>>s;
    int n = s.length();
    string res = "";
    for(int i=0; i<n; i++){
        char ch = s[i];
        if(ch == '.'){
            res += '0';
        }
        else if(ch=='-' && s[i+1] == '.'){
            res += '1';
            i++;
        }
        else {
            res += '2';
            i++;
        }
    }
    cout<<res<<endl;
}
int main() 
{ 
    solve();
    return 0; 
} 
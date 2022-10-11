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

bool checkPalindrome(string s){
    int n = s.length();
    for(int i=0; i<s.length(); i++){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    vector<int> map(26, 0);
    int n = s.length();
    for(auto ch: s){
        map[ch-'a'] += 1;
    }

    int odds= 0, evens = 0;
    for(auto i: map){
        if(i!=0){
            if(i%2 != 0){
                odds += 1;
            }
            else evens += 1;
        }
    }
    if(odds==0) {cout<<"First"<<endl;
    return;}
    if(max(odds, evens/2)%2 != 0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;

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
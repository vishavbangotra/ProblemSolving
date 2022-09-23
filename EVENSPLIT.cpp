#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long int
#define ll long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    TC{
        int n;cin>>n; 
        string s;
        cin>>s;
        int one=0, zero=0;
        for(auto ch: s){
        	if(ch == '1')
        		one++;
        	else zero++;
        }
        string res = "";
        if(one == 0 || zero == 0 || s=="10"){
        	res = s;
        }
        else{
        	while(zero--){
        		res += '0';
        	}
        	while(one--)
        		res += '1';
        }
        cout<<res<<endl;


    }
    return 0; 
} 
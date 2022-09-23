#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#include <stack> 
#define uint64 unsigned long long int
#define uint32 long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    TC{
    	int n;
        cin>>n;
        char s[n];
        string res;
        unordered_set<int> set;
        rep(i, n){
            cin>>s[i];
        }
        int i=n-1;
        while(i >= 0){
        	if(s[i] == '0'){
                set.insert(i-2);
                i--;
            }
            i--;
        }
        // for(auto i: set) cout<<i<<endl;
        for(int i=0; i<n; i++){
            if(s[i] == '0') continue;
            if(set.count(i) == 1){
                int temp = 10 * (s[i]-'0') + (s[i+1] - '1');
                res += 'a' + temp;
                i++;
            }
            else{
                res += 'a' + (s[i] - '1');
            }
        }
        cout<<res<<endl;
    }
    return 0; 
} 
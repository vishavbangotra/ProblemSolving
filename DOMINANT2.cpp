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
int main() 
{ 
    TC{
     	int n;
     	cin>>n;
     	vi arr(n);
     	for(auto &i: arr) cin>>i;
     	vi dp(n+1, 0);
     	sort(arr.begin(), arr.end());
     	int c=0, cm=0;
     	int e1=0, em=0;
     	for(auto i: arr){
     		if(e1 == i) {
     			c++;
     			if(c > cm){
     				cm = c;
     				em = e1;
     			}
     		}
     		else {
     			c= 1;
     			e1 = i;
     		}
     	}
     	int em1 = em;
     	int cm1 = cm;
     	c=0, cm=0;
     	e1=0, em=0;
     	for(auto i: arr){
     		if(i == em1) continue;
     		if(e1 == i) {
     			c++;
     			if(c > cm){
     				cm = c;
     				em = e1;
     			}
     		}
     		else {
     			c= 1;
     			e1 = i;
     		}
     	}
     	if(cm1 - cm >0) cout<<"YES"<<endl;
     	else cout<<"NO"<<endl;

    }
    return 0; 
} 
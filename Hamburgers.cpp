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
    
	string s;
    cin>>s;
    int nb, ns, nc, pb, ps, pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    uint64 r;
    cin>>r;
    uint64 bcost = 0;
    for(auto ch: s){
    	if(ch == 'B'){
    		if(nb == 0){
    			bcost += pb;
    		}
    		else nb --;
    	}
    	if(ch == 'C') {
    		if(nc == 0){
    			bcost += pc;
    		}
    		else nc--;
    	}
    	if(ch == 'S') {
    		if(nc == 0){
    			bcost += pc;
    		}
    		else nc--;
    	}
    }
    cout<<r/bcost<<endl;

    
    return 0; 
} 
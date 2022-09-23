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
        int a, b;
        cin>>a>>b;
    	if((a+b) % 2 != 0){
    		if(a!=1 && b!=1){
    			cout<<"Yes"<<endl;
    		}
    		else
    			cout<<"No"<<endl;
        }
        else{
        	if(a%2 !=0 || b%2 != 0) cout<<"No"<<endl;
        	else{
        		cout<<"Yes"<<endl;
        	}
        }
    }
    return 0; 
} 
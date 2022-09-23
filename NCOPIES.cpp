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
        int n, m;
        cin>>n>>m;
        string s; cin>>s;
        int sum = 0, p=0;
        for(auto i: s){
        	sum += i - '0';
        }
        int c = 0;
        if(sum==0) cout<<m*n<<endl;
        else if(((sum*m)&1) == 1)
        	cout<<0<<endl;
       	else{
       		if((m&1) == 0){
       			bool temp = false;
       			int i=n-1;
       			while(s[i]-'0' != 1 && i>=0){
       				c++;
       				i--;
       			}
       			c++;
       			i = 0;
       			while(s[i]-'0' != 1 && i<n){
       				c++;
       				i++;
       			}
       			cout<<c<<endl;
       		}
       		else{
       			int psum = sum / 2;
       			int tsum = 0;
       			int i = 0;
       			while(tsum <= psum){
       				tsum += s[i] - '0';
       				c++;
       			}
       			cout<<c<<endl;
       		}
       	}

    	
    }
    return 0; 
} 
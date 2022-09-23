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
        vector<int> res;
        if(n == 1) cout<<1<<endl;
        else if(n==2) cout<<1<<" "<<2<<endl;
        else if(n==3) cout<<2<<" "<<1<<" "<<3<<endl;
        else {
        	int start = 1, end = n-2;
        	if(n%2 != 0){
        		while(start <= end){
        			res.push_back(start);
        			if(start != end)
        				res.push_back(end);
        			start++;
        			end--;
        		}
        	}
        	else{
        		while(start < end){
        			res.push_back(end--);
        			res.push_back(start++);
        		}
        	}
        	res.push_back(n-1);
    		res.push_back(n);	
        	for(auto i: res) cout<<i<<" ";
    		cout<<endl;
        }
    }
    return 0; 
} 
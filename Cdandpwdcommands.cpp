#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#include<stack>
#define ull unsigned long long int
#define ll long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 

string getDir(stack<string> s){
	string res = "/";
	while(!s.empty()){
		res += s.top();
		res += ""
		s.pop();
	}
	return res;
}

int main() 
{ 
    int n;cin>>n; 
    stack<string> res;
    for(int i=0; i<n; i++){
    	string temp; cin>>temp;
    	if(temp == "pwd"){
    		cout<<getDir(res)<<endl;
    	}
    	else{
    		if(temp == "cd"){
    			string t;
    			cin>>t;
    			if(t == ".."){
    				res.pop();
    			}
    			else{
    				int start = 1;
    				for(int j=1; j<t.length(); j++){
    					if(t[j] == '/' || j==t.length()-1){
    						if(t.substr(start, j) == "..")
    							res.pop();
    						else
    							res.push(t.substr(start, j));
    						start = j+1; 
    					}
    				}
    			}
    		}
    	}
    }
    return 0; 
} 
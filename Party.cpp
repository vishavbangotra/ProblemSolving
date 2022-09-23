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


int findDepth(int node, vector<vector<int>> &list){
	if(list[node].empty()) return 1;
	int maxD = 0;
	for(auto i: list[node])
		maxD = max(maxD, findDepth(i, list));
	return 1 + maxD;
}

int main() 
{ 
    int n;
    cin>>n;
    vector<int> roots;
    vector<vector<int>> list(n+1);
    for(int i=1; i<=n; i++){
    	int temp; 
    	cin>>temp;
    	if(temp!=-1)
    		list[temp].push_back(i);
    	else 
    		roots.push_back(i);
	}
	int maxD = 1;
	for(auto root: roots){
		maxD = max(maxD, findDepth(root, list));
	}
	
	cout<<maxD<<endl;
    return 0; 
} 
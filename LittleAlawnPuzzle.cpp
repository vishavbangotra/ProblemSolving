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

void findComponents(vector<vector<int>> &alist, vector<bool> &vis, int i){
	if(!vis[i]){
		vis[i] = true;
		for(auto node: alist[i]){
			findComponents(alist, vis, node);
		}
	}
}

int main() 
{ 
    TC{
        int n;
        cin>>n;
        vector<int> a(n+1), b(n+1);
        vector<vector<int>> alist(n+1);
        for(int i=1; i<=n; i++){
        	cin>>a[i];
        }
        for(int i=1; i<=n; i++){
        	cin>>b[i];
        }
        for(int i=1; i<=n; i++){
        	alist[a[i]].push_back(b[i]);
        	alist[b[i]].push_back(a[i]);
        }
        vector<bool> vis(n+1, false);
        int res = 0;
        for(int i=1; i<=n; i++){
        	if(!vis[i]){
        		findComponents(alist, vis, i);
        		res += 1;
        	}
        }
        cout<<(int)pow(2, res) % (1000000000+7)<<endl;
    }
    return 0; 
} 
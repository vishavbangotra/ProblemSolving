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

void bfs(int n, vector<vector<bool>> &vis, int i, int j){
	if(i > n-1 || j >= n-1 || i < 0 || j < 0) return;
	if(!vis[i][j]){
		vis[i][j] = true;
		bfs(n, vis, i-2, j+1);
		bfs(n, vis, i+2, j+1);
		bfs(n, vis, i-1, j+2);
		bfs(n, vis, i+1, j+2);
	}
}

int main() 
{ 
    TC{
        int n; cin>>n;
        vector<string> arr(n);
        for(auto &i: arr) cin>>i;
    	int ii, jj;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++){
    			if(arr[i][j] == 'K'){
    				jj = j;
    				ii = i;
    				break;
    			}
    		}
    	}
    	vector<vector<bool>> vis(n, vector<bool>(n, false));
    	bfs(n, vis, ii, jj);
    	int ans = 0;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++){
    			if(arr[i][j] == 'P' && vis[i][j]){
    				ans++;
    			}
    			cout<<vis[i][j]<<" ";
    		}cout<<endl;

    	}
    	cout<<ans<<endl;
    }
    return 0; 
} 
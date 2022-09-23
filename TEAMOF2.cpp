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
        int n; cin>>n;
        vector<vector<bool>> arr(n, vector<bool> (6, false));
        for(int i=0; i<n; i++){
        	int k; cin>>k;
        	while(k--){
        		int j;cin>>j;
        		arr[i][j] = true;
        	}
        }
       
        for(int i=0; i<n-1; i++){
        	for(int j=i+1; j<n; j++){
        		for(int k=1; k<=5; k++){
        			if(arr[i][k] == false && arr[j][k] == false) goto loop;
        		}
        		cout<<"YES"<<endl;
        		goto end;
        		loop:;
        	}
        }
        cout<<"No"<<endl;
        end:;
    }
    return 0; 
} 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define uint64 long long int
#define uint32 long long int
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
int main() 
{ 
    TC{
    	i
        int n; cin>>n;
        vector<uint64> arr(n);
        for(auto &i: arr) cin>>i;
    	vector<uint64> b(n-1);
    	for(auto &i: b) cin>>i;
		sort(arr.begin(), arr.end());
		sort(b.begin(), b.end());
		if(n==2){
			if(b[0]-arr[1] < 0)
				cout<<b[0]-arr[0]<<endl;
			else cout<<b[0]-arr[1]<<endl;
		}
		if(n == 3){
			uint64 temp = b[1]-b[0];
			if(arr[1]-arr[0] == temp) cout<<b[1]-arr[1]<<endl;
			else if(arr[2]-arr[0] == temp) cout<<b[0]-arr[0]<<endl;
			else cout<<b[0]-arr[1]<<endl;
		}
		else{
			if(arr[1]-arr[0] == b[1]-b[0]){
				cout<<b[0]-arr[0]<<endl;
			}
			else{
				if(arr[2]-arr[0] == b[1]-b[0]){
					cout<<b[0]-arr[0]<<endl;
				}
				else{
					if(arr[2]-arr[1] == b[1]-b[0]){
						cout<<b[0]-arr[1]<<endl;
					}
				}
			}
		}
    }
    return 0; 
} 
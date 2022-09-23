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
        int n;cin>>n;
        int start = 1, end = n;
        while(n--){
        	if(start == end){
        		cout<<start<<endl;
        		break;
        	} 
        	if(end - 1 == start){
        		cout<<end<<" "<<start<<endl;
        		break;
        	}
        	cout<<end<<" "<<start<<" ";
        	end--;
        	start++;
        }

    }
    return 0; 
} 
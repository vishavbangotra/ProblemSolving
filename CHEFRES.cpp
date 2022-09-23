#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define TC int t;cin>>t;while(t--)
#define FOREACH(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define vi vector<int>

using namespace std; 
// bool compare(const pair<long long int, long long int> &a, const pair<long long int, long long int> &b){
// 	return (a.first == b.first);
// }
bool search(vector<pair<long long int, long long int>> &arr, int start, int end, int target){
	if(start > end) return false;
	if(start==end){
		if(start.first <= target && start.second > target) return true;
		else return false;
	}
}
int main() 
{ 
    TC{
        int n, m;
        cin>>n>>m;
        vector<pair<long long int, long long int>> intervals(n);
        vector<long long int> p(m);
        for(int i=0; i<n; i++){
        	cin>>intervals[i].first>>intervals[i].second;
        }
    	for(auto &i: p) cin>>i;
		sort(intervals.begin(), intervals.end());
		long long int end = intervals[n-1].second;
		for(int i=0; i<m; i++){
			int binary_search()
		}
    }
    return 0; 
} 
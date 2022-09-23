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
bool compare(const pair<int, string> &a, const pair<int, string> &b){
	return (a.first > b.first);
}
int main() 
{ 
    int n, m;
    cin>>n>>m;
    unordered_set<int> special;
    for(int i=0; i<n; i++){
    	int temp; cin>>temp;
    	special.insert(temp);
    }
	vector<pair<int, string>> arr;
	vector<pair<int, string>> res;
	for(int i=0; i<m; i++){
		int dump, pop;
		string ipt;
		cin>>dump>>pop>>ipt;
		if(special.find(dump) != special.end()){
			res.push_back(make_pair(pop, ipt));
		}
		else arr.push_back(make_pair(pop, ipt));
	}
	sort(res.begin(), res.end(), compare);
	sort(arr.begin(), arr.end(), compare);
	for(auto i: res){
		cout<<i.second<<endl;
	}
	for(auto i: arr){
		cout<<i.second<<endl;
	}
    return 0; 
} 
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

bool check(ll k, vector<ll> &arr, ll h){
	int n = arr.size();
	rep(i, n-1)
		h-= min(arr[i+1] - arr[i], k);
	h -= k;
	return (h<=0)?true:false;
}

ll binarySearch(vector<ll> &arr, ll h, ll low, ll high){
	if(high==low) return low;
	if(high-1==low) return (check(low, arr, h))?low:high;
	ll k = (high+low)/2;
	return (check(k, arr, h))?binarySearch(arr, h, low, k):binarySearch(arr, h, k+1, high);
}

int main() 
{ 
    TC{
     	int n; cin>>n;
     	ll h; cin>>h;
     	vector<ll> arr(n);
     	rep(i, n) cin>>arr[i];
     	cout<<binarySearch(arr, h, 1, h)<<endl;

    }
    return 0; 
} 
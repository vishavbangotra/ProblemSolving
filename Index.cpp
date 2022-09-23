#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    unsigned long long int n; cin>>n;
	    unsigned long long int k; cin>>k;
	    string arr;
	    cin>>arr;
	    vector<long long int> dp(n);
	    long long int count = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i] == '1')
	            count++;
	        else count--;
	        dp[i] = abs(count);
	    }
	    int z=0;
	    for(auto i:dp) if(i==0) z++;
	    if(dp[n-1] == 0) cout<<0<<endl;
	    else{
	        long long int temp = 0;
	        for(auto i: dp){
	            temp = max(temp, i);
	        }
	        cout<<ceil((double)temp/k)<<endl;
	        
	    }
	}
	return 0;
}

#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#include<iomanip>
#define ull unsigned long long
#define ll long long
#define foreach(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define array(i, n, arr) vector<long double> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 

void solve(){
    int n;
    cin>>n;
    array(i, n, arr);
    long double sum = 0;
    for(auto i: arr) sum += i;

    cout<<sum/n<<endl;
}
int main() 
{ 
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0; 
} 
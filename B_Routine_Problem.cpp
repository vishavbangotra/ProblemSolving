#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<limits.h>
#include<algorithm>
#include<unordered_set>
#define ull unsigned long long
#define ll long long
#define foreach(i, it) for(auto i=it.begin(); i!=it.end(); i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define array(i, n, arr) vector<ll> arr(n);for(auto &i:arr){cin>>i;}
using namespace std; 


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve(){
    ll a, b, c, d, x, y;
    cin>>a>>b>>c>>d;
    double temp; 
    temp = (1.000*(c/d)*a);
    if(temp > b){
        x = c*b*b;
        y = d*a*b;
    }
    else{
        x = d*a*a;
        y = c*a*b;
    }
    int ans = gcd(x, y);
    x = x/ans;
    y = y/ans;
    x = y-x;
    cout<<x<<"/"<<y<<endl;

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
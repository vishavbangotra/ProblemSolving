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


int check(ll r, ll x, ll &b, ll &s, ll &c, ll &nb, ll &ns, ll &nc, ll &pb, ll &ps, ll &pc){
    ll cost = pb*(nb*x - b);
    cost += ps*(ns*x - s);
    cost += pc*(nc*x - c);
    if(cost > r){
        return 1;
    }
    if(cost == r) return 0;
    else return -1;
}

ll binarySearch(ll lb, ll ub, ll r, ll &b, ll &s, ll &c, ll &nb, ll &ns, ll &nc, ll &pb, ll &ps, ll &pc){
    cout<<lb<<" "<<ub<<endl;
    if(lb == ub) return lb;
    if(lb==ub-1) return (check(r, ub, b, s,c, nb, ns, nc, pb, ps, pc) == -1 
                            || check(r, ub, b, s, c, nb, ns, nc, pb, ps, pc) == -0? ub : lb); 
    ll mid = (ub+lb)/2;
    int temp = check(r, mid, b, s, c, nb, ns, nc, pb, ps, pc);
    if(temp == 0) return mid;
    else if(temp == 1) return binarySearch(lb, mid-1, r, b, s, c, nb, ns, nc, pb, ps, pc);
    else return binarySearch(mid, ub, r, b, s, c, nb, ns, nc, pb, ps, pc);
}

int main() 
{ 
    
    string str;
    cin>>str;
    ll b, s, c;
    cin>>b>>s>>c;
    ll pb, ps, pc;
    cin>>pb>>ps>>pc;
    
    ll r; cin>>r;
    ll nb=0, ns=0, nc =0;
    
    for(auto i: str){
        if(i=='B') nb++;
        else if(i=='S') ns++;
        else nc++;
    }
    cout<<binarySearch(, r+1, r, b, s, c, nb, ns, nc, pb, ps, pc);

    return 0; 
} 
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

void solve(){
    int r, c;
    cin>>r>>c;
    vector<vector<char>> matrix(r, vector<char> (c));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    unordered_set<int> row, col;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(matrix[i][j] == 'S'){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    cout<<r*c - (row.size()*col.size())<<endl;
}
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0; 
} 
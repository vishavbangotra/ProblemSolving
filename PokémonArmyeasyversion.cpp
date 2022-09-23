#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    vector<int> a(n),b(n),t1(n),t2(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        t1[i]=a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        t2[i]=b[i];
    }

    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());

    t1.erase(unique(t1.begin(),t1.end()),t1.end());
    t2.erase(unique(t2.begin(),t2.end()),t2.end());

    for(int i=0;i<n;i++){
        a[i]=lower_bound(t1.begin(),t1.end(),a[i])-t1.begin();
    }
    for(int i=0;i<n;i++){
        b[i]=lower_bound(t2.begin(),t2.end(),b[i])-t2.begin();
    }

    int temp=0,ans=0;

    vector<int> p(n),q(n),r,crr(n);

    for(int i=0;i<n;i++){
        crr[a[i]]=b[i];
        p[i]=a[i]+b[i];
        q[b[i]]=i;
    }

    for(int i=0;i<n;i++){
        r.insert(upper_bound(r.begin(),r.end(),crr[i]),crr[i]);
        p[q[crr[i]]]-=lower_bound(r.begin(),r.end(),crr[i])-r.begin();
    }

    for(auto i: p){
        temp=max(i,temp);
    }

    for(auto i: p){
        ans+=(i==temp);
    }

    cout<<ans<<endl;

}

int32_t main(){
    int tc; 
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
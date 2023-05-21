#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    int t;cin>>t;
    int MOD=1e9+7;
    while(t--){
        int n;cin>>n;
        vector<int>a(n,0);
        vector<int>b(n,0);
        ll ans=1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for(int i=0;i<n;i++){
            auto up=upper_bound(a.begin(),a.end(),b[i]);
            int tmp=n-(up-a.begin());
            ans=ans*max(tmp-i,0)%MOD;
        }
        cout<<ans<<endline;
    }
    return 0;
}
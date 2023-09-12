#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        pair<ll,ll>vec[n+1];
        vector<ll>ans(n+1,0);
        ll s0=0,s1=0;
        for(int i=1;i<=n;i++) {
            cin>>vec[i].first;
            vec[i].second=i;
            s0+=vec[i].first;
        }
        sort(vec+1,vec+n+1);
        for(int i=1;i<=n;i++){
            s0-=vec[i].first;
            s1+=vec[i].first;
            ll tmp=n+vec[i].first*(2*i-n)-s1+s0;
            ans[vec[i].second]=tmp;

        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endline;
    }
    return 0;
}
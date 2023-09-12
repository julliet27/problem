#include<bits/stdc++.h>
#define ll long long int
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
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(n+1,INT_MAX);
        for(int i=1;i<=n;i++) cin>>a[i];
        int mn=min_element(a.begin(),a.end())-a.begin();
        int ans=0;
        for(int i=1;i<=n;i++){
            if(i!=mn){
                while(a[i]+a[mn]<=k){
                    a[i]+=a[mn];
                    ans++;
                }
            }
        }
        cout<<ans<<endline;

    }
    return 0;
}
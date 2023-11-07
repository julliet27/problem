#include<bits/stdc++.h>
#define ll long long 
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vec(n+1,0);
        vector<int>pref(n+1,0);
        vector<int>suff(n+1,0);
        for(int i=1;i<=n;i++) cin>>vec[i];
        int mx0=vec[1],mx1=vec[n];
        ll sum=0;
        for(int i=2;i<=n;i++){
            mx0=max(vec[i],mx0);
            pref[i]=mx0;
        }
        for(int i=n-1;i>0;i--){
            mx1=max(vec[i],mx1);
            suff[i]=mx1;
        }
        for(int i=1;i<=n;i++){
            sum+=max(vec[i],min(pref[i],suff[i]));
        }

        cout<<sum<<endline;
        
    }
    return 0;
}
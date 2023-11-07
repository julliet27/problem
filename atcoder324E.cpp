#include<bits/stdc++.h>
#define ll long long 
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=500001;
string vec[mx];
ll A[mx],B[mx],C[mx];
ll calc(const string &str,const string &t){
    ll cnt=0;
    for(ll i=0;i<str.size();i++){
        if(cnt>=(int)t.size()) break;
        if(str[i]==t[cnt]) cnt++;
    }
    return cnt;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll n;cin>>n;
    string t;cin>>t;
    
    for(ll i=1;i<=n;i++){cin>>vec[i];}
    for(ll i=1;i<=n;i++){A[i]=calc(vec[i],t);}
    reverse(t.begin(),t.end());
    for(ll i=1;i<=n;i++){
         reverse(vec[i].begin(),vec[i].end());
        B[i]=calc(vec[i],t);
        C[B[i]]++;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll num=max(0ll,(ll)t.size()-A[i]);
        for(ll p=num;p<=t.size();p++){
            ans+=C[p];
        }
    }
    cout<<ans<<endline;
    
    return 0;
}
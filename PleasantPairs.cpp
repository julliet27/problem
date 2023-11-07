#include<bits/stdc++.h>
#define ll long long int
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
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>input(n+1,0);
        vector<pair<ll,ll>>P;
        ll cnt=0;
        for(int i=1;i<=n;i++){
            ll num;cin>>num;
            P.push_back({num,i});
        }
        sort(P.begin(),P.end());
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(P[i].first*P[j].first>2*n) break;
                if(P[i].first*P[j].first==P[i].second+P[j].second) cnt++;
            }
        }
        cout<<cnt<<endline;
    }
    return 0;
}
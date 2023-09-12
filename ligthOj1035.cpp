#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void solve(ll num){
    vector<vector<ll>>vec;
    vector<ll>tmp;
    for(ll i=2;i*i<=num;i++){
        ll cnt=0;
        while(num%i==0){
            num /= i;
            cnt++;
        }
        if(cnt>0) vec.push_back({cnt,i});
    }
    if(num>1) vec.push_back({1,num});
    sort(vec.rbegin(),vec.rend());
    vector<ll>ans(vec[0][0],vec[0][1]);
    for(ll i=1;i<vec.size();i++){
        for(ll j=0;j<vec[i][0];j++){
            ans[j]=ans[j]*vec[i][1];
        }
    }
    cout<<ans.size()<<endline;
    reverse(ans.begin(),ans.end());
    for(ll i:ans){
        cout<<i<<" ";
    }
    cout<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        ll n;cin>>n;
        solve(n);
    }
    return 0;
}
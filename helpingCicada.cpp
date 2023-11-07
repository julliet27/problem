#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
ll findLCM(vector<ll>&tmp){
    if(tmp.size()==1) return tmp[0];
    ll ans=tmp[0];
    for(int i=1;i<tmp.size();i++){
        ans=(ans*tmp[i])/(__gcd(ans,tmp[i]));
    }
    return ans;
}
void solve(ll N,int M,int cnt, vector<int>&input){
    ll ans=0;
    for(int i=1;i<(1<<M);i++){
        int num=i,idx=0;
        vector<ll>tmp;
        while(num>0){
            if(num&1){
                tmp.push_back(input[idx]);
            }
            num=num/2;
            idx++;
        }
        if(tmp.size() & 1) ans+=(N/findLCM(tmp));
        else ans-=(N/findLCM(tmp));
        //cout<<ans<<endline;

    }
    cout<<"Case "<<cnt<<": "<<N-ans<<endline;
    cnt++;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    for(int p=1;p<=t;p++){
        ll N;
        int M;
        cin>>N>>M;
        vector<int>input(M,0);
        for(int i=0;i<M;i++)cin>>input[i];
        solve(N,M,p,input);
        
    }
    return 0;
}
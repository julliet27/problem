#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
ll mod=1e9+7;
struct Mat{
    ll arr[2][2];
    Mat(){
        memset(arr,0,sizeof(arr));
    }
    void identify(){
        for (ll i = 0; i < 2; i++) {
			arr[i][i] = 1;
		}
        arr[0][1]=1;
    }
    Mat operator*(Mat a){
        Mat res;
        for(ll i=0;i<2;i++){
            for(ll j=0;j<2;j++){
                for(ll k=0;k<2;k++){
                    res.arr[i][j]+=arr[i][k]*a.arr[k][j];
                    res.arr[i][j]%=mod;
                }
            }
        }
        return res;
    }
};
ll calc(ll m){
    if (m==0) return 0;
    Mat p,res_m;
    res_m.identify();
    p.arr[0][0]=p.arr[0][1]=p.arr[1][0]=1;
    if (m<=2) return 1;
    m-=2;
    while(m){
        if(m&1) res_m=res_m*p;
        p=p*p;
        m/=2;
    }
    return (res_m.arr[0][0]+mod)%mod;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--){
        ll m,n;cin>>m>>n;
        cout<<(calc(n+2)-calc(m+1)+mod)%mod<<endline;
    }
    return 0;
}

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
    ll t;cin>>t;
    ll arr[t];
    ll sum=(t*(t+1))/2;
    ll cnt1=0,cnt2=0,bal=0,ans=0;
    for(int i=0;i<t;i++) cin>>arr[i];
    for(int i=0;i<t;i++){
        if(bal%2==0) cnt1++;
        else cnt2++;
        if(arr[i]<0) bal++;
        if(bal%2==0) ans+=cnt1;
        else ans+=cnt2;
        //cout<<cnt1<<" "<<bal<<" "<<cnt2<<endline;
    }
    cout<<sum-ans<<" "<<ans<<endline;
    return 0;
}
#include<bits/stdc++.h>
#define ll  unsigned long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;cin>>n;
    ll arr[140];
    for(ll i=0;i<n;i++){cin>>arr[i];}
    bool flag=false;
    if(n>=130)flag=true;
    else{
        for(ll i=0;i<n;i++){
            if(!flag)
                for(ll j=i+1;j<n;j++){
                    for(ll k=j+1;k<n;k++){
                        for(ll m=k+1;m<n;m++){
                            if(arr[i]^arr[j]^arr[k]^arr[m]==0){
                                flag=true;
                                break;
                            }

                        }
                    }
                }
        }
    }
    if(flag) cout<<"Yes"<<endline;
    else cout<<"No"<<endline;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<ll>vec(n+1,0);
        vector<ll>odd(n+1,0);
        for(int i=0;i<n;i++){ cin>>vec[i]; }

        for(int i=1;i<=n;i++){
            if(vec[i-1]&1){
                odd[i]=1;
            }
        }
        int r=0,s=0;
        for(int i=1;i<=k;i++){
            s+=odd[i];
        }
        if(s) r++;
        for(int i=k+1;i<n+1;i++){
            s-=odd[i-k];
            s+=odd[i];
            if(s) r++;
        }
        cout<<r<<endline;




    }
    return 0;
}

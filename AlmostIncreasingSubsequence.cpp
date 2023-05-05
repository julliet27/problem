#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    fast_io;
    int n,q;cin>>n>>q;
    vector<int>vec(n);
    vector<int>dp(n-1);
    for(int i=0;i<n;i++)cin>>vec[i];
    for(int i=1;i<n-1;i++){
        int down=vec[i-1]>=vec[i] && vec[i]>=vec[i+1];
        dp[i]=dp[i-1]+down;
    }
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        l--,r--;
        if(l==r)cout<<1<<endline;
        else{
            int ans=(r-l+1)-dp[r-1]+dp[l];
            cout<<ans<<endline;
        }

    }
    return 0;
}


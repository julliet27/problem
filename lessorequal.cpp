#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,k;cin>>n>>k;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    int ans=0,cnt=0;
    if (k==0) ans=vec[0]-1;
    else ans=vec[k-1];
    for(int i=0;i<n;i++){
        if(vec[i]<=ans)cnt++;
    }
    if(ans<1 || cnt!=k) cout<<-1<<endline;
    else cout<<ans<<endline;
    return 0;
}
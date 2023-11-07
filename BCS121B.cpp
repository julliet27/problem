#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    // fast_cin();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif               
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ans=-1;
        vector<int>cnt(4,0);
        for(int i=0;i<n;i++){
            string type;cin>>type;
            if(type=="A"){ cnt[0]++;}
            else if(type=="B") {cnt[1]++;}
            else if(type=="AB") {cnt [2]++;cnt[1]++;cnt[0]++;}
            else{
                cnt[0]++;
                cnt[1]++;
                cnt[2]++;
                cnt[3]++;
            }
        }
        for(int i=0;i<4;i++){
            ans=max(ans,cnt[i]);
        }
        cout<<ans<<endline;
    }
    return 0;
}
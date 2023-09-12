#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vec(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++) cin>>vec[i];
        ans.push_back(vec[0]);
        for(int i=1;i<n;i++){
            if(vec[i-1]>vec[i]){
                ans.push_back(1);
                ans.push_back(vec[i]);
            }
            else ans.push_back(vec[i]);
        }
        cout<<ans.size()<<endline;
        for(int i:ans) cout<<i<<" ";
        cout<<endline;
    }

    return 0;
}
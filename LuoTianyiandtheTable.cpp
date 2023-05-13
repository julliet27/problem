#include<bits/stdc++.h>
#define endline "\n"
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<ll>vec(n*m);
        for(int i=0;i<(n*m);i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int ans=(vec[m*n-1]-vec[0])*(m*n-min(m,n))+(min(m,n)-1)*max(vec[m*n-1]-vec[1],vec[m*n-2]-vec[0]);
        cout<<ans<<endline;
    }
    return 0;
}

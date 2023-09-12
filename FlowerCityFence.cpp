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
        vector<int>vec(n+1,0);
        bool flag=false;
        for(int i=1;i<=n;i++){cin>>vec[i];}
        for(int i=1;i<=n;i++){
            cout<<vec[vec[i]]<<" "<<vec[i]<<" "<<i<<endline;
            if(n<vec[i] or vec[vec[i]]<i){
                flag=true;
                break;
            }
        }
        if(flag)cout<<"NO"<<endline;
        else cout<<"YES"<<endline;
 
    }
    return 0;
}
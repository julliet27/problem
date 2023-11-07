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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>input(n,0);
        int mn=10;
        ll ans=1;
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        sort(input.begin(),input.end());
        for(int i=1;i<n;i++){
            ans*=input[i];
        }
        cout<<ans*(input[0]+1)<<endline;

    }
    return 0;
}
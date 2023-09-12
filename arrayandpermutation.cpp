#include<bits/stdc++.h>
#define ll long long int
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
        vector<int>a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endline;
    }
    return 0;
}
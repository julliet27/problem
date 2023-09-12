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
    int n,k;cin>>n>>k;
    ll mx=-1,cnt=0;
    unordered_map<int,int>check;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(check[a]!=0){
            mx=max(cnt,mx);
            // cnt-=1;
        }
        else cnt++;
        cout<<cnt<<" ";
        check[a]=1;
        
        
    }
    // cout<<endline;
    // cout<<mx<<endline;
    return 0;
}
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
    int n;cin>>n;
    int a[2010];
    a[0]=1;
    a[1]=a[2]=0;
    for(int i=3;i<=n;i++){
        a[i]=(a[i-1]+a[i-3])%mod;
    }
    cout<<a[n]<<endline;
    return 0;
}
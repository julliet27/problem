#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int f91(int n){
    if(n>=101) return n-10;
    return f91(f91(n+11));
}
int main(){
    fast_cin();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n;cin>>n;
    cout<<f91(n)<<endline;
    return 0;
}
#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
void solve(){
    int n, k;cin >> n >> k;
    vector<int> p(n);
    int c_v = 1;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) {
        if (p[i] == c_v) c_v++;
    }

    cout << (n  - c_v + k) / k  << endline;
}
int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


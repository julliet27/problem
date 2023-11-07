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
    int t, cs = 0; cin >> t;
    while (t--) {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    long long ans = 1LL * n * (n + 1) / 2;
    for (int i = 1, j = 1; i <= n; i = j) {
      for (j = i + 1; j <= n and a[i] == a[j]; j++);
      int k = (j - i);
      ans -= 1LL * k * (k + 1) / 2;
    }
    cout << "Case " << ++cs << ": " << ans << '\n';
    }               
    // int t;cin>>t;
    // for(int p=1;p<=t;p++){
    //     int n;cin>>n;
    //     vector<int>input(n,0);
    //     for(int i=0;i<n;i++){cin>>input[i];}
    //     int total=(n*(n-1))/2;
    //     for(int i=0;i<n-1;i++){
    //         if(input[i]==input[i+1]) total--;
    //     }
    //     cout<<"Case "<<p<<": "<<total<<endline;
    // }
    return 0;
}
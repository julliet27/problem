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
        int sum=0,mn=INT_MAX;
        while(n--){
            int a;cin>>a;
            sum+=a;
            mn=min(mn,a);
        }
        cout<<sum-mn<<endline;
    }
    return 0;
}
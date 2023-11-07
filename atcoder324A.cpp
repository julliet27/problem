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
    set<int>S;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        S.insert(a);
    }
    if(S.size()==1) cout<<"Yes"<<endline;
    else cout<<"No"<<endline;
    return 0;
}
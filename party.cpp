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
    int mx=-1;
    vector<int>vec(n+1,0);
    for(int i=1;i<=n;i++){cin>>vec[i];}
    for(int i=n;i>=1;i--){
        int cnt=0,num=i;
        while(num!=-1){
            num=vec[num];
            cnt++;
        }
        mx=max(cnt,mx);
    }
    cout<<mx<<endline;
    return 0;
}
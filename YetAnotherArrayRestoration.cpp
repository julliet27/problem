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
        int n,x,y;cin>>n>>x>>y;
        int diff=y-x;
        int num=n;
        vector<int>vec;
        vec.push_back(y);
        vec.push_back(x);
        while(diff%num!=0 && num>2) num--;
        cout<<diff<<" "<<num<<endline;
    }             
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<pair<int,char>>mp;
void solve(){
    int cnt=0,mx=0,num=0;
    sort(mp.begin(),mp.end());
    for(auto i:mp){
        if(i.second=='b'){
            cnt++;
        }
        if(i.second=='a'){
            cnt--;
        }
        if(cnt>mx){
            mx=cnt;
            num=i.first;
        }

    }
    cout<<num<<" "<<mx<<endline;
    
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        mp.push_back({x,'b'});
        mp.push_back({y,'a'});
    }
    solve();
    return 0;
}
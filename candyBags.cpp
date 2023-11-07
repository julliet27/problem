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
    int square=t*t;
    vector<pair<int,int>>vec;
    for(int i=0;i<t*2;i++){
        int cnt=0;
        for(int j=0;j<t/2;j++){
            cout<<i+j+1<<" "<<square-(i+j)<<" ";
            cnt++;
        }
        i=i+cnt-1;
        cout<<"break"<<endline;
        //vec.push_back({i+1,square-i});
    }
    return 0;
}
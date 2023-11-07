#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int solve(int num){
    vector<pair<int,int>>input;
    int poly=0,num1=0,mx=INT_MIN,tmp=INT_MIN;
    for(int i=0;i<num;i++){
        int p,q;cin>>p>>q;
        pair<int,int>P{p,q};
        if(i==0) poly=q;
        if(count(input.begin(),input.end(),P)==1){
            return -1;
        }
        if(p>q){
            if(q>mx){
                mx=q;
                num1=p;
            }
        }
        else tmp=max(tmp,p);
        input.push_back(P);
    }
    if(mx==INT_MIN) return -1;
    return max({poly,mx,tmp})+1;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    while(t--){
        int num;cin>>num;
        cout<<solve(num)<<endline;;

    }
    return 0;
}
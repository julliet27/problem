#include<bits/stdc++.h>
#define ll long long 
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
    ll int n;cin>>n;
    string str;cin>>str;
    string rstr=str;
    reverse(rstr.begin(),rstr.end());
    vector<ll>ans;
    for(int i=1;i<=n;i++){
        string a;cin>>a;
        
        ll left=0,right=0;
        for(ll i=0;i<str.size();i++){
            if(str[i]==a[i]) left++;
            else break;
        }
        reverse(a.begin(),a.end());
        
        for(ll i=0;i<rstr.size();i++){
            if(rstr[i]==a[i]) right++;
            else break;
        }
        
        if(left+right>=a.size()-1 && a.size()+1==str.size()) {ans.push_back(i);}
        else if(left==a.size() && a.size()==str.size()) {ans.push_back(i);}
        else if(left+right>=a.size()-1 && a.size()-1==str.size()) {ans.push_back(i);}
        else if(left+right==a.size()-1 && a.size()==str.size()) {ans.push_back(i);}
        
    }
    cout<<ans.size()<<endline;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endline;
    
    return 0;
}
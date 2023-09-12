#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++) cin>>vec[i];
        for(int i=0;i<n;i++)sum+=vec[i];
        if(sum%2==0) cout<<"Yes"<<endline;
        else cout<<"No"<<endline;

    }
    return 0;
}
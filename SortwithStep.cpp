#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>input(n);
        vector<int>index(n,0);
        int cnt=0;
        for(int i=0;i<n;i++) cin>>input[i];
        for(int i=1;i<=n;i++){
            index[i-1]=abs(input[i-1]-i);
        }
        for(int i:index){
            if(i%k!=0) cnt++;
        }
        if(cnt==2)cout<<1<<endline;
        else if (cnt>2)cout<<-1<<endline;
        else cout<<0<<endline;
    }
    return 0;
}

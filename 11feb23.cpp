#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%10==9){
            cout<<(n/10)*10+4<<" "<<n-((n/10)*10+4)<<endline;
        }
        else{
            if(n&1){cout<<n/2<<" "<<n/2+1<<endline;}
            else{cout<<n/2<<" "<<n/2<<endline;}
        }
    }
    return 0;
}

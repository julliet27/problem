#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    vector<ll>pw;
    int i=2;
    while(i<31){
        pw.push_back((1<<i)-1);
        i++;
    }
    int t;cin>>t;
    while(t--){
        ll num;cin>>num;
        if(num==1) cout<<1<<" "<<0<<endline;
        else{
            ll idx=0;
            ll a,b;
            while(idx<pw.size() && pw[idx]<=num){
                if(num%pw[idx]==0){
                    a=pw[idx];
                }
                idx++;
            }
            ll tmp=num/a;
            b=a^tmp;
            cout<<a<<" "<<b<<endline;

        }

    }

    return 0;
}


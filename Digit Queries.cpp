#include<bits/stdc++.h>
#define endline "\n"
#define ll long long int
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    fast_io;
    vector<ll>vec(19,1);
    for(int i=1;i<=18;i++){
        vec[i]=vec[i-1]*10;
    }
    int q;cin>>q;
    while(q--){
        ll k;cin>>k;
        ll numDigit=0;
        ll prevDigit=0;
        ll Digit=0;
        for(int i=1;i<19;i++){
            Digit+=(vec[i]-vec[i-1])*i;
            if(Digit>=k){
                numDigit=i;
                break;
            }
            prevDigit=Digit;
        }
        ll low=vec[numDigit-1];
        ll high=vec[numDigit]-1;
        ll ans=0;
        ll posAns=0;
        while(low<=high){
            ll mid=(high+low)/2;
            ll pos=(mid-vec[numDigit-1])*numDigit+prevDigit+1;
            if(pos<=k){
                if(mid>ans){
                    ans=mid;
                    posAns=pos;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        string num=to_string(ans);
        cout<<num[k-posAns]<<endline;



    }
    return 0;
}

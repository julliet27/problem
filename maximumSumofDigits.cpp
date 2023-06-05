#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    ll n;cin>>n;
    ll ans=0,tmp=0,ind=0;
    string str_a,str_b;
    string str_n=to_string(n);
    ll length=str_n.size()-1;
    while(length>0){
        tmp=(tmp*10)+9;
        length--;
    }
    str_a=to_string(tmp);
    str_b=to_string(n-tmp);
    for(int i=0;i<str_a.size();i++){
        ans+=(int)str_a[i]-(int)'0';
    }
    for(int i=0;i<str_b.size();i++){
        ans+=(int)str_b[i]-(int)'0';
    }
    cout<<ans<<endline;
    return 0;
}
#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    string str;cin>>str;
    int n=str.size();
    vector<int>pref_a(str.size()+1,0);
    vector<int>pref_b(str.size()+1,0);
    for(int i=0;i<str.size();i++){
        pref_a[i+1]=pref_a[i]+(str[i]=='a');
        pref_b[i+1]=pref_b[i]+(str[i]=='b');
    }
    ll ans=max(n-pref_a[n],n-pref_b[n]);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ll left=pref_b[n]-pref_b[i+1];
            ll mid=pref_a[i+1]-pref_a[j];
            ll right=pref_b[j];
            ll tmp=n-(left+right+mid);
            ans=max(tmp,ans);
        }
    }
    cout<<ans<<endline;
    return 0;
}
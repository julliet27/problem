#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int s,n;cin>>s>>n;
    int chk=0,sum=0,mn=0;
    for(int i=1;i<=s;i++){
        int data;cin>>data;
        sum+=data;
        if(sum-i-mn>n) chk=1;
        mn=min(mn,sum-i);
    }
    if(chk) cout<<"NO"<<endline;
    else cout<<"YES"<<endline;
    return 0;
}
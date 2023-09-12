#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int a,b;cin>>a>>b;
    int sum=a+b+(a*b);
    string str=to_string(sum);
    bool flag=false;
    for(int i=0;i<str.size();i++){
        if(str[i]!='1'){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"NO"<<endline;
    else cout<<"YES"<<endline;
    return 0;
}
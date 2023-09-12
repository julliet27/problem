#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str;cin>>str;
        set<string>s;
        for(int i=1;i<str.size();i++){
            string tmp="";
            tmp+=str[i-1];
            tmp+=str[i];
            s.insert(tmp);
        }
        cout<<s.size()<<endline;
    }
    return 0;
}
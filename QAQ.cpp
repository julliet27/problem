#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    string str;cin>>str;
    vector<int>prefix(str.size(),0),suffix(str.size(),0);
    int res=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='Q'){
            prefix[i]=1;
            suffix[i]=1;
        }
    }
    for(int i=1;i<str.size();i++) prefix[i]=prefix[i]+prefix[i-1];
    for(int i=str.size()-2;i>=0;i--) suffix[i]=suffix[i]+suffix[i+1];
    for(int i=1;i<str.size()-1;i++){
        if(str[i]=='A'){
            res+=prefix[i-1]*suffix[i+1];
        }
    }
    cout<<res<<endline;

    return 0;
}




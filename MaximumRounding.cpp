#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        str='0'+str;
        int p=str.size();
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]>='5') {
                str[i-1]++;
                p=i;
            }
        }
        for(int i=(str[0]=='0');i<str.size();i++){
            cout<<(i>=p?'0':str[i]);
        }
        //cout<<"check"<<(str[0]=='0')<<endline;
        cout<<endline;

    }
    return 0;
}
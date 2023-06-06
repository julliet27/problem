#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    int arr[8];
    int PowerTWO=1;
    for(int i=0;i<8;i++){
        arr[i]=PowerTWO;
        PowerTWO*=2;
    }
    for(int j=0;j<t;j++){
        string dec,bin;cin>>dec>>bin;
        string tmp="";
        int sum=0,cnt=0;
        for(int i=bin.size()-1;i>=0;i--){
            if(bin[i]!='.'){
                if(bin[i]!='0') sum+=arr[cnt];
                cnt++;
            }
            else{
                tmp='.'+to_string(sum)+tmp;
                cnt=0;
                sum=0;
            }
        }
        tmp=to_string(sum)+tmp;
        if(tmp==dec) cout<<"Case "<<j+1<<": "<<"Yes"<<endline;
        else cout<<"Case "<<j+1<<": "<<"No"<<endline;

    }
    return 0;
}
#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,a;cin>>n>>a;
        vector<int>vec;
        while(a>0){
            int tmp=a%10;
            a=a/10;
            vec.push_back(tmp);
        }
        for(int i:vec){
            cout<<i<<" ";
        }
        cout<<endline;

    }
    return 0;
}
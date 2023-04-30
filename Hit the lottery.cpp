#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    ll num;cin>>num;
    vector<int>vec{100,20,10,5,1};
    int ans=0;
    for(int i=0;i<vec.size();i++){
        ans+=num/vec[i];
        num=num%vec[i];
    }
    cout<<ans<<endline;
    return 0;
}

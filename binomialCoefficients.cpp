#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n; cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){ cin>>vec[i]; }
    sort(vec.rbegin(),vec.rend());
    int mx=vec[0];
    int a,b;
    ll diff=mod,ans=0;
    for(int i=1;i<n;i++){
        a=vec[i];b=mx-vec[i];
        if(abs(a-b)<diff){
            ans=a;
            diff=a-b;
        }
    }
    cout<<mx<<" "<<ans<<endline;
    return 0;
}


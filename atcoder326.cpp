#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    int n,m;cin>>n>>m;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        vec.push_back(a);
    }
    int mx=-1;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        int low=lower_bound(vec.begin(), vec.end(), vec[i])-vec.begin();
        int high=upper_bound(vec.begin(), vec.end(), vec[i]+m-1)-vec.begin();
        mx=max(high-low,mx);
    }
    cout<<mx<<endline;
    return 0;
}


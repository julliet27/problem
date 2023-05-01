#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int>input;
        for(int j=0;j<n;j++){
            int a;cin>>a;
            input.push_back(a);
        }
        int mx=max_element(input.begin(),input.end())-input.begin();
        int mn=min_element(input.begin(),input.end())-input.begin();
        cout << min({max(mx, mn) + 1,(n - 1) - min(mx, mn) + 1,(n - 1) - mx+ mn + 2,(n - 1) - mn + mx + 2}) << "\n";

    }
    return 0;
}



#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
bool comparator(char a, char b){
    if(tolower(a)==tolower(b)) {
        return a<b;
    }
    return tolower(a)<tolower(b);
}
int main(){
    fast_cin();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        sort(str.begin(),str.end(),comparator);
        cout<<str<<endline;
        while(next_permutation(str.begin(),str.end(),comparator)){
            cout<<str<<endline;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e9+1;
int arr[mx];
int main(){
    fast_cin();
    memset(arr,0,sizeof(arr));
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr[a]++;
    }
    for(int i=1;i<mx;i++){
        arr[i]=arr[i-1]+arr[i];
        cout<<arr[i];
    }
    cout<<endline;
    return 0;
}

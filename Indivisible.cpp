#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int num;cin>>num;
        if(num==1)cout<<1<<endline;
        else if(num%2) cout<<-1<<endline;
        else{
            int arr[num];
            for(int i=1;i<=num;i++) arr[i-1]=i;
            for(int i=0;i<num;i+=2){
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
            for(int i:arr) cout<<i<<" ";
            cout<<endline;
        }
    }
    return 0;
}

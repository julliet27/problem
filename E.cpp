#include<bits/stdc++.h>
#define ll long long
#define u int
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
	queue<int>Q1;
    priority_queue<int,vector<int>,greater<int>>Q2;
	while(t--){
	    int a;cin>>a;
        if(a==1){
            int b;cin>>b;
            Q1.push(b);
        }
        else if(a==2){
            int ans;
            if(!Q2.empty()){
                ans=Q2.top();
                Q2.pop();
            }
            else{
                ans=Q1.front();
                Q1.pop();
            }
            cout<<ans<<endline;
        }
        else{
            while(!Q1.empty()){
                Q2.push(Q1.front());
                Q1.pop();
            }
        }
	}
    return 0;
}























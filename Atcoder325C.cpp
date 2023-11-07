#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
char input[1200][1200];
bool visited[1200][1200];
int n,m;
ll cnt=0;
void dfs(int x,int y){
	if(x>n-1 || y>m-1 || x<0 || y<0){return ;}
	visited[x][y]=1;
	//cout<<x<<" "<<y<<endline;
	if(y+1<m && !visited[x][y+1] && input[x][y+1]=='#'){dfs(x,y+1);}
	if(y-1>=0 && !visited[x][y-1] && input[x][y-1]=='#'){dfs(x,y-1);}
	
	if(x+1<m && !visited[x+1][y] && input[x+1][y]=='#'){dfs(x+1,y);}
	if(x-1>=0 && !visited[x-1][y] && input[x-1][y]=='#'){dfs(x-1,y);}
	
	if(y+1<m && x+1<n && !visited[x+1][y+1] && input[x+1][y+1]=='#'){dfs(x+1,y+1);}
	if(y-1>=0 && x-1>=0 && !visited[x-1][y-1] && input[x-1][y-1]=='#'){dfs(x-1,y-1);}
	
	if(y+1<m && x-1>=0 && !visited[x-1][y+1] && input[x-1][y+1]=='#'){dfs(x-1,y+1);}
	if(y-1>=0 && x+1<n && !visited[x+1][y-1] && input[x+1][y-1]=='#'){dfs(x+1,y-1);}
}
int main(){
    fast_cin();
    cin>>n>>m;
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>input[i][j];
		}
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(input[i][j]=='.' && !visited[i][j]){
				visited[i][j]=1;
			}
			if(input[i][j]=='#' && !visited[i][j]){
				//cnt++;
				//cout<<i<<" "<<j<<endline;
				dfs(i,j);
				cnt=(cnt+1)%mod;
			}
		}
    }
    cout<<cnt%mod<<endline;
    return 0;
}
/***
4 5
.....
.....
....#
...##
***/

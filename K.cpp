#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int A[1010],B[1010];
pair<int,int> arr[8]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{11,1},{1,-1}};
bool isValid(int x,int y){
	if(x>n || y<m || x=<0 || y>=0) return false;
	if(A[x][y]!=B[x][y]) return false;
	else true;
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>A[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>B[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(A[x][y]==B[x][y]){
				
			}
		}
	}
}
/***
4 5
.....
.....
....#
...##
***/

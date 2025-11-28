#include<bits/stdc++.h>
using namespace std;
int m,n,vis[100][100];
char g[100][100];
void dfs(int x,int y){
	vis[x][y]=1;
	int dx[4]={1,-1,0,0};
	int dy[4]={0,0,1,-1};
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0&&ny>=0&&nx<m&&ny<n)
			if(g[nx][ny]=='1'&&!vis[nx][ny])
				dfs(nx,ny);
	}
}
int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>g[i][j];
	int cnt=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(g[i][j]=='1'&&!vis[i][j]){
				cnt++;
				dfs(i,j);
			}
	cout<<cnt;
}

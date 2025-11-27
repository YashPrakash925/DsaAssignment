#include<bits/stdc++.h>
using namespace std;
int N,K,E,adj[101][101],w[101][101],d[101],u[101];
int main(){
	cin>>N>>E>>K;
	for(int i=1;i<=N;i++) d[i]=1e9;
	int x,y,wt;
	for(int i=0;i<E;i++){
		cin>>x>>y>>wt;
		adj[x][y]=1;
		w[x][y]=wt;
	}
	d[K]=0;
	for(int c=0;c<N;c++){
		int node=-1,b=1e9;
		for(int i=1;i<=N;i++)
			if(!u[i]&&d[i]<b) b=d[i],node=i;
		if(node==-1) break;
		u[node]=1;
		for(int j=1;j<=N;j++)
			if(adj[node][j]&&d[node]+w[node][j]<d[j])
				d[j]=d[node]+w[node][j];
	}
	int ans=0;
	for(int i=1;i<=N;i++){
		if(d[i]==1e9){
			cout<<-1;
			return 0;
		}
		if(d[i]>ans) ans=d[i];
	}
	cout<<ans;
}

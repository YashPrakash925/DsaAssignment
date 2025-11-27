#include <bits/stdc++.h>
using namespace std;
int adj[100][100], vis[100], V, E;
void dfs(int u){
    vis[u]=1;
    for(int i=0;i<V;i++){
        if(adj[u][i] && !vis[i]) dfs(i);
    }
}
int main(){
    cin>>V>>E;
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    int count=0;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            count++;
            dfs(i);
        }
    }
    cout<<count;
}
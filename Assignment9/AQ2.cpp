#include <bits/stdc++.h>
using namespace std;
int m,n;
int grid[100][100], dista[100][100], used[100][100];
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>grid[i][j], dista[i][j]=1e9;
    dista[0][0]=grid[0][0];
    while(true){
        int x=-1,y=-1,minv=1e9;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!used[i][j] && dista[i][j]<minv){
                    minv=dista[i][j];
                    x=i; y=j;
                }
        if(x==-1) break;
        used[x][y]=1;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int nx=x+dx[k], ny=y+dy[k];
            if(nx>=0 && ny>=0 && nx<m && ny<n){
                if(dista[x][y] + grid[nx][ny] < dista[nx][ny])
                    dista[nx][ny] = dista[x][y] + grid[nx][ny];
            }
        }
    }
    cout<<dista[m-1][n-1];
}

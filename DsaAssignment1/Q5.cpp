#include <bits/stdc++.h>
using namespace std;
void ms(){
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<r;i++){
        int sum=0;
        for (int j=0;j<c;j++){
            sum+=a[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<sum<<endl;
    }
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=a[i][j];
        }
        cout<<"Sum of column"<<j+1<<" = "<<sum<<endl;
    }
}
int main(){
    ms();
    return 0;
}
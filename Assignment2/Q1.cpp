#include<bits/stdc++.h>
using namespace std;
void search(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    int x,c=0;
    cout<<"Enter element to be searched :";
    cin>>x;
    int s=0,e=n-1;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==x){
            c=1;
            break;
        }
        else if(arr[m]>x){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=(s+e)/2;
    }
    if(c==1) cout<<"Found";
    else cout<<"Not Found";
}
int main(){
    search();
    return 0;
}
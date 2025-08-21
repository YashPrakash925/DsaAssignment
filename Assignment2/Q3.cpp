#include<bits/stdc++.h>
using namespace std;
void linear(int arr[],int n,int x){
    int c=0,pos;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            c=1;
            pos=i;
            break;
        }
    }
    if(c==1) cout<<"Found at index "<<pos<<endl;
    else cout<<"Not Found\n";
}
void binary(int arr[],int n,int x){
    int c=0,pos;
    int s=0,e=n-1;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==x){
            c=1;
            pos=m;
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
    if(c==1) cout<<"Found at index "<<pos<<endl;
    else cout<<"Not Found\n";
}
int main(){
    int n,x;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Enter eleement to be searhed :";
    cin>>x;
    cout<<"Using linear ->";
    linear(arr,n,x);
    cout<<"Using binary ->";
    binary(arr,n,x);
}
#include<bits/stdc++.h>
using namespace std;
void inversion(){
    int count=0,n;
    cout<<"Enter size :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element :";
        cin>>a[i];
    }
    for(int i=0;i+1<n;i++){
        if(a[i]>a[i+1]) count++;
    }
    cout<<"No of inversons-> "<<count;
}
int main(){
    inversion();
    return 0;
}
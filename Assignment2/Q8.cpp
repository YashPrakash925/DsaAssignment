#include<bits/stdc++.h>
using namespace std;
void distinct(){
    int count,n;
    cout<<"Enter size :";
    cin>>n;
    count=n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element :";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                count--;
                break;
            }
        }
    }
    cout<<"No of distinct elements-> "<<count;
}
int main(){
    distinct();
    return 0;
}
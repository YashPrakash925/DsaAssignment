#include<bits/stdc++.h>
using namespace std;
void pod(){
    int n,k;
    cout<<"Enter size of array and value of k: ";
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";  
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==k){
                count++;
            }
        }
    }
    cout<<"Total pairs-> "<<count<<endl;
}
int main(){
    pod();
    return 0;
}
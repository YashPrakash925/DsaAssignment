#include<bits/stdc++.h>
using namespace std;
void sortarr(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    int s=0, m=0, e=n-1;
    while(m<=e){
        if(arr[m]==0){
            swap(arr[s],arr[m]);
            s++;
            m++;
        }
        else if(arr[m]==1) m++;
        else{
            swap(arr[m],arr[e]);
            e--;
        }
    }
    cout<<"Sorted array-> ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main(){
    sortarr();
    return 0;
}
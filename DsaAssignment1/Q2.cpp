#include <bits/stdc++.h>
using namespace std;
void del(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<(size-1);k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
    }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    del(arr,size);
    return 0;
}
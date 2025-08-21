#include<bits/stdc++.h>
using namespace std;
void dup(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int x=0;
    for(int i=0;i<n;i++) if(arr[i]==2) x++;
    int i=n-1,j=n+x-1;
    while(i>=0){
        if(j<n) arr[j]=arr[i];
        if(arr[i]==2){
            j--;
            if(j<n) arr[j]=2;
        }
        i--;
        j--;
    }
}
int main(){
    dup();
    return 0;
}
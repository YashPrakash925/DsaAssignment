#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		bool f=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				f=1;
			}
		}
		if(!f) return;
	}
}
void printArr(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={5,1,4,2,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	printArr(arr,n);
	bubbleSort(arr,n);
	printArr(arr,n);
}

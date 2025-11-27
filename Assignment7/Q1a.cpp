#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[k]) k=j;
		}
		int t=arr[i];
		arr[i]=arr[k];
		arr[k]=t;
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
	selectionSort(arr,n);
	printArr(arr,n);
}

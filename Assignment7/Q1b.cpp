#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int c=arr[i],p=i-1;
		while(p>=0 && arr[p]>c){
			arr[p+1]=arr[p];
			p--;
		}
		arr[p+1]=c;
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
	insertionSort(arr,n);
	printArr(arr,n);
}

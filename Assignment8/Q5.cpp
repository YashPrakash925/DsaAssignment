#include <bits/stdc++.h>
using namespace std;
void maxHeapify(int a[],int n,int i){
	int k=i,l=2*i+1,r=2*i+2;
	if(l<n && a[l]>a[k]) k=l;
	if(r<n && a[r]>a[k]) k=r;
	if(k!=i){
		swap(a[i],a[k]);
		maxHeapify(a,n,k);
	}
}
void minHeapify(int a[],int n,int i){
	int k=i,l=2*i+1,r=2*i+2;
	if(l<n && a[l]<a[k]) k=l;
	if(r<n && a[r]<a[k]) k=r;
	if(k!=i){
		swap(a[i],a[k]);
		minHeapify(a,n,k);
	}
}
void maxHeapSort(int a[],int n){
	for(int i=n/2-1;i>=0;i--) maxHeapify(a,n,i);
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		maxHeapify(a,i,0);
	}
}
void minHeapSort(int a[],int n){
	for(int i=n/2-1;i>=0;i--) minHeapify(a,n,i);
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		minHeapify(a,i,0);
	}
}
int main(){
	int a[]={10,3,5,1,8};
	int n=5;
	maxHeapSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	int b[]={10,3,5,1,8};
	minHeapSort(b,n);
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
}

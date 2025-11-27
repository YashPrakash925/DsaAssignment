#include <bits/stdc++.h>
using namespace std;
int a[100],n=0;
void pushPQ(int x){
	n++;
	a[n]=x;
	int i=n;
	while(i>1 && a[i/2]<a[i]){
		swap(a[i],a[i/2]);
		i/=2;
	}
}
int topPQ(){
	if(n==0) return -1;
	return a[1];
}
void heapify(int i){
	int l=2*i,r=2*i+1,m=i;
	if(l<=n && a[l]>a[m]) m=l;
	if(r<=n && a[r]>a[m]) m=r;
	if(m!=i){
		swap(a[i],a[m]);
		heapify(m);
	}
}
void popPQ(){
	if(n==0) return;
	a[1]=a[n];
	n--;
	heapify(1);
}
int main(){
	pushPQ(30);
	pushPQ(50);
	pushPQ(20);
	pushPQ(40);
	cout<<topPQ()<<endl;
	popPQ();
	cout<<topPQ()<<endl;
}

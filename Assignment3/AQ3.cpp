#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
	int arr[n];
	int top=-1;
public:
	void push(int num){
		if(top==n-1){
			cout<<"Stack Full\n";
			return;
		}
		arr[++top]=num;
	}
	int pop(){
		if(top==-1){
			cout<<"Stack Empty\n";
			return -1;
		}
		return arr[top--];
	}
	int peek(){
		if(top==-1) return -1;
		return arr[top];
	}
	int isEmpty(){
		return (top==-1);
	}
};
void nge(){
	Stack s;
	int size;
	cout<<"Enter size: ";
	cin>>size;
	int arr[size],ans[size];
	cout<<"Enter array: \n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	ans[size-1]=-1;
	s.push(arr[size-1]);
	for(int i=size-2;i>=0;i--){
		if(arr[i]<s.peek()){
			ans[i]=s.peek();
			s.push(arr[i]);
		}
		else{
			while(arr[i]>s.peek() && s.isEmpty()==0){
				s.pop();
				if(arr[i]<s.peek()){
					ans[i]=s.peek();
					s.push(arr[i]);
				}	
			}
			if(s.isEmpty()){
				ans[i]=-1;
				s.push(arr[i]);
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	nge();
	return 0;
}

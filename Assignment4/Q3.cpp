#include<bits/stdc++.h>
using namespace std;
#define MAX 500
class Queue{
	int q[MAX],front=-1,rear=-1;
public:
	int isEmpty(){
		if(front==-1||front>rear)return 1;
		return 0;
	}
	int isFull(){
		if(rear==MAX-1)return 1;
		return 0;
	}
	void enqueue(int x){
		if(isFull())cout<<"QueueFull\n";
		else{
			if(front==-1)front=0;
			q[++rear]=x;
	}
	}
	int dequeue(){
		if(isEmpty())cout<<"QueueEmpty\n";
		else return q[front++];
	}
	void peek(){
		if(isEmpty())cout<<"QueueEmpty\n";
		else cout<<"Front:"<<q[front]<<"\n";
	}
	void display(){
		if(isEmpty())cout<<"QueueEmpty\n";
		else{
			for(int i=front;i<=rear;i++)cout<<q[i]<<" ";
				cout<<"\n";
	}
	}
};
void ilq(){
	Queue q1,q2,q3;
	int n;
	cout<<"Enter size: ";
	cin>>n;
	cout<<"Enter queue:\n";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		q1.enqueue(x);
	}
	for(int i=0;i<n/2;i++){
		q2.enqueue(q1.dequeue());
	}
	for(int i=0;i<n/2;i++){
		q3.enqueue(q2.dequeue());
		q3.enqueue(q1.dequeue());
	}
	q3.display();
}
int main(){
	ilq();
	return 0;
}

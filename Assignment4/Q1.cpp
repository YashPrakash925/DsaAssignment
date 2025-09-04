#include<bits/stdc++.h>
using namespace std;
#define MAX 5
int q[MAX],front=-1,rear=-1;
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
		cout<<"Enqueued:"<<x<<"\n";
	}
}
void dequeue(){
	if(isEmpty())cout<<"QueueEmpty\n";
	else cout<<"Dequeued:"<<q[front++]<<"\n";
}
void peek(){
	if(isEmpty())cout<<"QueueEmpty\n";
	else cout<<"Front:"<<q[front]<<"\n";
}
void display(){
	if(isEmpty())cout<<"QueueEmpty\n";
	else{
		cout<<"Queue:";
		for(int i=front;i<=rear;i++)cout<<q[i]<<" ";
		cout<<"\n";
	}
}
int main(){
	int ch,x;
	do{
		cout<<"1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n";
        cout<<"Enter your choice :";
		cin>>ch;
		switch(ch){
			case 1:
                cin>>x;enqueue(x);
                break;
			case 2:
                dequeue();
                break;
			case 3:
                peek();
                break;
			case 4:
                display();
                break;
			case 5:
                cout<<"Exiting\n";
                break;
			default:
                cout<<"Invalid\n";
		}
	}while(ch!=5);
	return 0;
}
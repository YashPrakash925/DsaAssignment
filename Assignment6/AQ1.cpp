#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void display(Node* t){
    Node* temp=t;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=t);
}
void insert(Node* &t,int x){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->next=p;
        t=p;
    }
    Node* temp=t;
    do{
        temp=temp->next;
    }
    while(temp->next!=t);
    temp->next=p;
    p->next=t;
}
int size(Node* t){
	int count=0;
	Node* temp=t;
	do{
		count++;
		temp=temp->next;
	}
	while(temp!=t);
	return count;
}
void split(Node* &t){
	Node* q=t;
	do{
		q=q->next;
	}
	while(q->next!=t);
	int count=1;
	Node* temp=t;
	Node* p=new Node;
	int n=size(t),mid;
	if(n%2==0) mid=n/2;
	else mid=(n/2)+1;
	if(n==2){
		p=temp->next;
		temp->next=t;
		p->next=p;
		display(t);
		cout<<endl;
		display(p);
		return;
	}
	do{
		count++;
		temp=temp->next;
	}
	while(count<mid);
	p=temp->next;
	//cout<<temp->data<<" "<<p->data;
	temp->next=t;
	q->next=p;
	display(t);
	cout<<endl;
	display(p);
}
int main(){
    Node* head=NULL;
    insert(head,10);
    insert(head,20);
	insert(head,30);
	insert(head,40);
	insert(head,50);
	insert(head,60);
    //display(head);
	split(head);
}

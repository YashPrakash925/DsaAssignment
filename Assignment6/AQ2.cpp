#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next,*back;
};
void insert(Node* &t,int x){
	Node* p=new Node;
	p->data=x;
	p->next=p->back=NULL;
	if(t==NULL){
		t=p;
		return;
	}
	Node* temp=t;
	while(temp->next!=NULL) temp=temp->next;
	temp->next=p;
	p->back=temp;
}
int parity(int n){
	int c=0;
	while(n>0){
		if(n%2==1) c++;
		n/=2;
	}
	return c;
}
Node* delnode(Node* &head,Node* t){
	if(t->back==NULL && t->next==NULL){
		head=NULL;
		return NULL;
	}
	if(t->back==NULL){
		Node* nxt=t->next;
		nxt->back=NULL;
		head=nxt;
		return nxt;
	}
	if(t->next==NULL){
		Node* prv=t->back;
		prv->next=NULL;
		return NULL;
	}
	Node* prv=t->back;
	Node* nxt=t->next;
	prv->next=nxt;
	nxt->back=prv;
	return nxt;
}
void check(Node* &t){
	Node* temp=t;
	while(temp!=NULL){
		if(parity(temp->data)%2==0) temp=delnode(t,temp);
		else temp=temp->next;
	}
}
void display(Node* t){
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
}
int main(){
	Node* root=NULL;
	insert(root,18);
	insert(root,15);
	insert(root,8);
	insert(root,9);
	insert(root,14);
	check(root);
	display(root);
}

#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void insert(Node* &t,int x){
	Node* p=new Node;
	p->data=x;
	p->next=NULL;
	if(t==NULL){
		t=p;
		return;
	}
	Node* temp=t;
	while(temp->next!=NULL) temp=temp->next;
	temp->next=p;
}
void display(Node* t){
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<"\n";
}
void check(Node* t,Node* p){
    Node* temp=p;
    while(t!=NULL){
        while(p!=NULL){
        if(t==p){
            cout<<"Intersected";
            return;
        }
        else p=p->next;

    }
    t=t->next;
    p=temp;
    }
    cout<<"Not intersected";
}
int main(){
	Node *a=NULL,*b=NULL;
	insert(a,1);
	insert(a,2);
	insert(a,3);
	insert(b,4);
	insert(b,5);
	Node* common=new Node;
	common->data=7;
	common->next=NULL;
	Node* t=a;
	while(t->next!=NULL) t=t->next;
	t->next=common;
	t=b;
	while(t->next!=NULL) t=t->next;
	t->next=common;
	common->next=new Node{8,NULL};
	display(a); // 1 2 3 7 8
	display(b); // 4 5 7 8
    check(a,b);
}

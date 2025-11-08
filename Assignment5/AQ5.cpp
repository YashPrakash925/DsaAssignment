#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int power,coeff;
    Node* next;
};
void insert(Node* &t,int x,int y){
    Node* p=new Node;
    p->coeff=x;
    p->power=y;
    if(t==NULL){
        p->next=NULL;
        t=p;
        return;
    }
    Node* temp=t;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->next=NULL;
}
void display(Node* t){
    while(t!=NULL){
        cout<<t->coeff<<" "<<t->power<<endl;
        t=t->next;
    }
}
void add(Node* t,Node* p){
	Node* res=NULL;
	Node* temp=p;
	while(t!=NULL && p!=NULL){
		if(t->power>p->power){
			insert(res,t->coeff,t->power);
			t=t->next;
		}
		else if(t->power<p->power){
			insert(res,p->coeff,p->power);
			p=p->next;
		}
		else{
			insert(res,t->coeff+p->coeff,t->power);
			t=t->next;
			p=p->next;
		}
	}
	while(t!=NULL){
		insert(res,t->coeff,t->power);
		t=t->next;
	}
	while(p!=NULL){
		insert(res,p->coeff,p->power);
		p=p->next;
	}
	display(res);
}
int main(){
    Node* root1=NULL;
    insert(root1,5,2);
    insert(root1,4,1);
    insert(root1,2,0);
    Node* root2=NULL;
    insert(root2,5,1);
    insert(root2,5,0);
    add(root1,root2);
}

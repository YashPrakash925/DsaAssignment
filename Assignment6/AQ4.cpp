#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next,*back;
	Node(int x){
		data=x;
		next=back=NULL;
	}
};
void fix(Node *t){
	Node *p=t;
	while(p && p->next){
		if(p->next->back!=p){
			p->next->back=p;
			return;
		}
		p=p->next;
	}
	p=t;
	while(p && p->back){
		if(p->back->next!=p){
			p->back->next=p;
			return;
		}
		p=p->back;
	}
}
int main(){
	Node *h=new Node(1);
	h->next=new Node(2);
	h->next->back=h;
	h->next->next=new Node(3);
	h->next->next->back=h->next;
	h->next->next->back=NULL; 
	fix(h);
	Node *p=h;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

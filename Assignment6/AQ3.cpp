#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* back;
	Node(int x){
		data=x;
		next=back=NULL;
	}
};
void push(Node* &t,int x){
	Node* p=new Node(x);
	if(t==NULL){
		t=p;
		return;
	}
	Node* temp=t;
	while(temp->next) temp=temp->next;
	temp->next=p;
	p->back=temp;
}
Node* revK(Node* head,int k){
	Node* curr=head;
	Node* newHead=NULL;
	Node* ktail=NULL;

	while(curr){
		int cnt=0;
		Node* groupHead=curr;
		while(curr && cnt<k){
			curr=curr->next;
			cnt++;
		}
		Node* prev=curr;
		Node* temp=groupHead;
		while(cnt--){
			Node* nxt=temp->next;
			temp->next=prev;
			if(prev) prev->back=temp;
			prev=temp;
			temp=nxt;
		}
		if(newHead==NULL) newHead=prev;
		if(ktail){
			ktail->next=prev;
			prev->back=ktail;
		}
		ktail=groupHead;
	}
	return newHead;
}
void print(Node* t){
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
}
int main(){
	Node* head=NULL;
	int n,k,x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		push(head,x);
	}
	head=revK(head,k);
	print(head);
}

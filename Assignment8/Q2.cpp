#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* rchild;
    Node* lchild;
};
Node* insert(Node* &t,int x){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->lchild=p->rchild=NULL;
        t=p;
        return t;
    }
    if(x>t->data){
        t->rchild=insert(t->rchild,x);
    }
    else if(x<t->data){
        t->lchild=insert(t->lchild,x);
    }
    else{
        cout<<"No duplicates allowed\n";
        return t;
    }
    return t;
}
void iterativesearch(Node* t,int x){
    while(t!=NULL){
        if(x>t->data){
            t=t->rchild;
        }
        else if(x<t->data){
            t=t->lchild;
        }
        else{
            cout<<"Found\n";
            return;
        }
    }
    cout<<"Not Found\n";
    return;
}
void recursivesearch(Node* t,int x){
    if(t==NULL){
        cout<<"Not Found\n";
        return;
    }
    if(x==t->data){
        cout<<"Found\n";
        return;
    }
    if(x<t->data) recursivesearch(t->lchild,x);
    else recursivesearch(t->rchild,x);
}
void max(Node* t){
    Node* temp=NULL;
    while(t!=NULL){
        temp=t;
        t=t->rchild;
    }
    cout<<"Max :"<<temp->data;
}
void min(Node* t){
    Node* temp=NULL;
    while(t!=NULL){
        temp=t;
        t=t->lchild;
    }
    cout<<"MIn :"<<temp->data;
}
void successor(Node* t,int x){
	Node* p=NULL,*temp=t;
	while(temp!=NULL && temp->data!=x){
		if(x<temp->data) temp=temp->lchild;
		else temp=temp->rchild;
	}
	if(temp==NULL){
		cout<<"Value not found";
		return;
	}
	if(temp->rchild!=NULL){
		Node* q=temp->rchild;
		while(q->lchild!=NULL) q=q->lchild;
		cout<<"Successor = "<<q->data;
		return;
	}
	while(t!=NULL){
		if(x<t->data){
			p=t;
			t=t->lchild;
		}
		else if(x>t->data) t=t->rchild;
		else break;
	}
	if(p!=NULL) cout<<p->data;
	else cout<<"No successor";
}
void predecessor(Node* t,int x){
	Node* p=NULL,*temp=t;
	while(temp!=NULL && temp->data!=x){
		if(x<temp->data) temp=temp->lchild;
		else temp=temp->rchild;
	}
	if(temp==NULL){
		cout<<"Value not found";
		return;
	}
	if(temp->lchild!=NULL){
		Node* q=temp->lchild;
		while(q->rchild!=NULL) q=q->rchild;
		cout<<q->data;
		return;
	}
	while(t!=NULL){
		if(x>t->data){
			p=t;
			t=t->rchild;
		}
		else if(x<t->data) t=t->lchild;
		else break;
	}
	if(p!=NULL) cout<<p->data;
	else cout<<"No predecessor";
}

int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,20);
    predecessor(root,10);
}
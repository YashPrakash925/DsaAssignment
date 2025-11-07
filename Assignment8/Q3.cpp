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
Node* del(Node* &t,int x){
    if(t==NULL){
        return NULL;
    }
    if(x<t->data){
        t->lchild=del(t->lchild,x);
    }
    else if(x>t->data){
        t->rchild=del(t->rchild,x);
    }
    else{
        Node* temp=new Node;
        if(t->lchild==NULL){
            temp=t->rchild;
            delete t;
            return temp;
        }
        else if(t->rchild==NULL){
            temp=t->rchild;
            delete t;
            return temp;
        }
        temp=t->rchild;
        while(temp->lchild!=NULL) temp=temp->lchild;
        t->data=temp->data;
        t->rchild=del(t->rchild,temp->data);
    }
    return t;
}
void inorder(Node* t){
    if(t!=NULL){
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
    }
}
int maxdepth(Node* t){
	if(t==NULL){
        return 0;
    }
	if(t->lchild==NULL && t->rchild==NULL){
        return 1;
    }
	if(t->lchild==NULL){
        return 1+maxdepth(t->rchild);
    }
	if(t->rchild==NULL){
        return 1+maxdepth(t->lchild);
    }
	return 1+max(maxdepth(t->lchild),maxdepth(t->rchild));
}
int mindepth(Node* t){
	if(t==NULL){
        return 0;
    }
	if(t->lchild==NULL && t->rchild==NULL){
        return 1;
    }
	if(t->lchild==NULL){
        return 1+mindepth(t->rchild);
    }
	if(t->rchild==NULL){
        return 1+mindepth(t->lchild);
    }
	return 1+min(mindepth(t->lchild),mindepth(t->rchild));
}
int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,2);
    inorder(root);
    cout<<maxdepth(root);
    cout<<mindepth(root);
}
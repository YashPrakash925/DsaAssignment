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
void preorder(Node* t){
    if(t!=NULL){
        cout<<t->data<<" ";
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
void inorder(Node* t){
    if(t!=NULL){
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
    }
}
void postorder(Node* t){
    if(t!=NULL){
        postorder(t->lchild);
        postorder(t->rchild);
        cout<<t->data<<" ";
    }
}
void search(Node* t,int x){
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
int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,20);
    postorder(root);
}
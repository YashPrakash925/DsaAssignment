#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
};
void  insertatend(Node* &t,int x){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->next=p->prev=NULL;
        t=p;
        return;
    }
    Node* temp=t;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
    p->next=NULL;
}
void insertatbegin(Node* &t,int x){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->next=p->prev=NULL;
        t=p;
        return;
    }
    Node* temp=t;
    temp->prev=p;
    p->next=temp;
    p->prev=NULL;
    t=p;
}
void insertafter(Node* &t,int x,int value){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->next=p->prev=NULL;
        t=p;
        return;
    }
    Node* temp=t;
    while(temp!=NULL && temp->data!=value){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Invalid\n";
        return;
    }
    Node* temp1=temp->next;
    temp->next=p;
    p->prev=temp;
    p->next=temp1;
    temp1->prev=p;
    return;
}
void delbegin(Node* &t){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    if(t->next==NULL){
        t=NULL;
        return;
    }
    Node* temp=t->next;
    temp->prev=NULL;
    t->next=NULL;
    t=temp;
}
void delend(Node* &t){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    if(t->next==NULL){
        t=NULL;
        return;
    }
    Node* temp=t;
    Node* temp1=NULL;
    while(temp->next!=NULL){
        temp1=temp;
        temp=temp->next;
    }
    temp->prev=NULL;
    temp1->next=NULL;
}
void del(Node* &t,int value){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* temp=t;
    Node* temp1=NULL;
    while(temp!=NULL && temp->data!=value){
        temp1=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Invalid\n";
        return;
    }
    if(temp->prev==NULL){
        if(temp->next==NULL){
            temp=NULL;
            return;
        }
        Node* p=temp->next;
        p->prev=NULL;
        temp->next=NULL;
        t=p;
        return;
    }
    else if(temp->next==NULL){
        Node* p=temp->prev;
        p->next=NULL;
        temp->prev=NULL;
        t=p;
        return;
    }
    else{
        Node* a=temp->prev;
        Node* b=temp->next;
        a->next=temp->next;
        b->prev=temp->prev;
        temp->next=temp->prev=NULL;
        return;
    }
}
void search(Node* t,int x){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    while(t!=NULL && t->data!=x){
        t=t->next;
    }
    if(t->data==x){
        cout<<"Found\n";
        return;
    }
    if(t==NULL){
        cout<<"Not Found\n";
        return;
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
    insertatend(root,10);
    insertatend(root,20);
    insertatend(root,30);
    del(root,20);
    display(root);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
void insertatend(Node* &head,int x){
    Node* t=new Node;
    t->data=x;
    if(head==NULL){
        t->next=NULL;
        head=t;
        return;
    }
    t->next=NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
}
void display(Node* head){
    cout<<"Linked List :\n";
    Node* t=head;
    while(t!=NULL){
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}
int deleteend(Node* &head){
    if(head==NULL){
        cout<<"Empty\n";
        return -1;
    }
    Node* t=head;
    if(t->next==NULL){
        head=NULL;
        return t->data;
    }
    Node* p=NULL;
    while(t->next!=NULL){
        p=t;
        t=t->next;
    }
    p->next=NULL;
    return t->data;
}
void reverse(Node* &head){
    int n=0;
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    Node* t=head;
    while(t!=NULL){
        n++;
        t=t->next;
    }
    Node* temp=NULL;
    for(int i=0;i<n;i++){
        insertatend(temp,deleteend(head));
    }
    head=temp;
    display(head);
}
int main(){
    Node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    display(head);
    reverse(head);
}
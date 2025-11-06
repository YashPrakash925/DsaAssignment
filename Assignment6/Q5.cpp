#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
void insert(Node* &t,int x){
    Node* p=new Node;
    p->data=x;
    if(t==NULL){
        p->next=p;
        t=p;
    }
    Node* temp=t;
    do{
        temp=temp->next;
    }
    while(temp->next!=t);
    temp->next=p;
    p->next=t;
}
void check(Node* t){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* temp=t;
    do{
        temp=temp->next;
    }
    while(temp!=NULL && temp!=t);
    if(temp==NULL){
        cout<<"Not circular\n";
        return;
    }
    else{
        cout<<"Circular\n";
        return;
    }
}
int main(){
    Node* head=NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    check(head);
}
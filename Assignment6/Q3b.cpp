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
void size(Node* t){
    int count=0;
    Node* temp=t;
    do{
        count++;
        temp=temp->next;
    }
    while(temp!=t);
    cout<<"Size :"<<count;
}
int main(){
    Node* head=NULL;
    insert(head,10);
    insert(head,20);
    size(head);
}
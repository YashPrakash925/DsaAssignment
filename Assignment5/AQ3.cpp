#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void display(Node* t){
    Node* temp=t;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=t);
}
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
void check(Node* &t,int k,int size){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    if(k==-1){
        cout<<"No Loop\n";
        return;
    }
    int count=0;
    Node* temp=t;
    while(count<size){
        count++;
        temp=temp->next;
    }
    temp->next=NULL;
    cout<<"Loop removed\n";
}
int main(){
    Node* root=NULL;
    insert(root,1);
    insert(root,2);
    insert(root,3);
    insert(root,4);
    check(root,1,4);
}

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
void size(Node* t){
    int count=0;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    cout<<"Size :"<<count;
}
int main(){
    Node* root=NULL;
    //insertatend(root,10);
    //insertatend(root,20);
    //insertatend(root,30);
    size(root);
    return 0;
}
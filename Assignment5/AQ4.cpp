#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
void insert(Node* &head,int x){
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
    cout<<endl<<"Linked List :\n";
    Node* t=head;
    while(t!=NULL){
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<"NULL\n"<<endl;
}
void rotate(Node* &t,int k){
    if(t==NULL){
        cout<<"Empty\n";
        return;
    }
    int count=0;
    while(count<k){
        count++;
        Node* temp=t;
        Node* p=t;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
        t=t->next;
        temp->next=NULL;
    }
    display(t);
}
int main(){
    Node* root=NULL;
    insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
    rotate(root,4);
}

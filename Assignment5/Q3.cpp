#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
void insertatbegin(Node* &head,int x){
    Node* temp=new Node;
    temp->data=x;
    if(head==NULL){
        temp->next=NULL;
        head=temp;
        return;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void insertatend(Node* &head,int x){
    Node* t=new Node;
    t->data=x;
    t->next=NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
}
void display(Node* p){
    cout<<"Elements in LL\n";
        while(p!=NULL){
       cout<<p->data<<" -> ";
        p=p->next;
    }
        cout<<" NULL\n";
}
void middle(Node* head){
    Node* t=head;
    Node* p=head;
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    int count=1;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    int c=1;
    while(c!=count/2){
        p=p->next;
        c++;
    }
    cout<<"The middle element is ";
    cout<<p->data;
}
int main(){
    Node* head=NULL;
    insertatbegin(head,10);
    insertatend(head,20);
    insertatend(head,30);
    insertatend(head,40);
    insertatend(head,50);
    display(head);
    middle(head);
}
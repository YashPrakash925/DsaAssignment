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
void occurences(Node* &head,int key){
    Node* p=NULL;
    Node* t=head;
    int count=0;
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    while(t!=NULL){
    if(t->data==key){
        count++;
        Node* del=t;
        if(p==NULL){
            head=t->next;
            t=head;
        }
        else{
            p->next=t->next;
            t=p->next;
        }
        delete del;
    }else{
        p=t;
        t=t->next;
    }
}
    if(t==NULL && count==0){
        cout<<"No occurences";
        return;
    }
    cout<<"No of occurences : "<<count;
}
void display(Node* head){
    cout<<endl<<"Linked List :\n";
    Node* t=head;
    while(t!=NULL){
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertatbegin(head,1);
    insertatend(head,2);
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,1);
    insertatend(head,3);
    insertatend(head,1);
    display(head);
    occurences(head,1);
    display(head);
}
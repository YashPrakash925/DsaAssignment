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
void insertbetween(Node* &head,int x,int value){
    if(head==NULL){
        Node* temp=new Node;
        temp->data=x;
        temp->next=NULL;
        head=temp; 
    }
    else{
        Node *t=new Node;
        t->data=x;
        Node* temp=head;
        while(temp!=NULL && temp->data!=value){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Value not found\n";
            return;
        }
        t->next=temp->next;
        temp->next=t;
    }
}
void deletebegin(Node* &head){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* t=head;
    if(t->next==NULL){
        head=NULL;
        delete t;
        return;
    }
    head=t->next;
    t->next=NULL;
    delete t;
}
void deleteend(Node* &head){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* t=head;
    if(t->next==NULL){
        head=NULL;
        delete t;
        return;
    }
    Node* p=new Node;
    while(t->next!=NULL){
        p=t;
        t=t->next;
    }
    p->next=NULL;
    delete t;
}
void deletenode(Node* &head,int value){
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* t=head;
    Node* p=new Node;
    if(t->next==NULL){
        head=NULL;
        delete t;
        return;
    }
    if(t->data==value){
        head=t->next;
        t->next=NULL;
        delete t;
        return;
    }
    while(t!=NULL && t->data!=value){
        p=t;
        t=t->next;
    }
    if(t==NULL){
        cout<<"Invalid input\n";
        return;
    }
    p->next=t->next;
    t->next=NULL;
    delete t;
}
void pos(Node* head,int value){
    int count=1;
    if(head==NULL){
        cout<<"Empty\n";
        return;
    }
    Node* t=head;
    while(t!=NULL && t->data!=value){
        count++;
        t=t->next;
    }
    if(t==NULL){
        cout<<"Invalid input\n";
        return;
    }
    if(t->data==value){
        cout<<"Position : "<<count<<endl;
    }
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
int main(){
    int n;
    Node* head=NULL;
    while(n!=9){
        cout<<"------MENU FOR SLL------\n";
        cout<<"1. Insertion at the beginning\n";
        cout<<"2. Insertion at the end.\n";
        cout<<"3. Insertion in between\n";
        cout<<"4. Deletion from the beginning\n";
        cout<<"5. Deletion from the end\n";
        cout<<"6. Deletion of a specific node\n";
        cout<<"7. Search for a node and display its position from head\n";
        cout<<"8. Display all the node values.\n";
        cout<<"Enter your choice: ";
        cin>>n;
    switch(n){
        case 1:
            int x;
            cout<<"Enter element to be inserted :";
            cin>>x;
            insertatbegin(head,x);
            break;
        case 2:
            int a;
            cout<<"Enter element to be inserted :";
            cin>>a;
            insertatend(head,a);
            break;
        case 3:
            int b,y;
            cout<<"Enter element to be inserted :";
            cin>>b;
            cout<<"Enter value after which the element is to be inserted :";
            cin>>y;
            insertbetween(head,b,y);
            break;
        case 4:
            deletebegin(head);
            break;
        case 5:
            deleteend(head);
            break;
        case 6:
            int c;
            cout<<"Enter value to be deleted :";
            cin>>c;
            deletenode(head,c);
        case 7:
            int d;
            cout<<"Enter value : ";
            cin>>d;
            pos(head,d);
            break;            
        case 8:
            display(head);
            break;
    }
    }
}
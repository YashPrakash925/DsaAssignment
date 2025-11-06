#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    char data;
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
void palindrome(Node* t){
    int size=0;
    Node* temp=t;
    Node* q=NULL;
    while(temp!=NULL){
        size++;
        q=temp;
        temp=temp->next;
    }
    Node* p=t;
    int i=0,count=0;
    while(i<size/2 && size!=1){
        if(p->data==q->data) count++;
        p=p->next;
        q=q->prev;
        i++;
    }
    if(count==size/2 || size==1){
        cout<<"Palindrome\n";
        return;
    }
    cout<<"Not Palindrome\n";
}
void display(Node* t){
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main(){
    Node* root=NULL;
    insertatend(root,'L');
    insertatend(root,'E');
    insertatend(root,'V');
    insertatend(root,'E');
    insertatend(root,'L');
    palindrome(root);
    display(root);
    return 0;
}
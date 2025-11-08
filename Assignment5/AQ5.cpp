#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int power,coeff;
    Node* next;
};
void insert(Node* &t,int x,int y){
    Node* p=new Node;
    p->coeff=x;
    p->power=y;
    if(t==NULL){
        p->next=NULL;
        t=p;
        return;
    }
    Node* temp=t;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    if(temp->power==y) return;
    temp->next=p;
    p->next=NULL;
}
void display(Node* t){
    while(t!=NULL){
        cout<<t->coeff<<" "<<t->power<<endl;
        t=t->next;
    }
}
void add(Node* t,Node* p){
    Node* temp=p;
    Node* result=NULL;
    while(t!=NULL){
        while(p!=NULL){
            if(t->power==p->power){
                insert(result,t->coeff+p->coeff,t->power);
                
            }
            else insert(result,t->coeff,t->power);
            p=p->next;
        }
        p=temp;
        t=t->next;
    }
    display(result);
}
int main(){
    Node* root1=NULL;
    insert(root1,5,2);
    insert(root1,4,1);
    insert(root1,2,0);
    Node* root2=NULL;
    insert(root1,5,1);
    insert(root1,5,0);
    // display(root1);
    // cout<<endl;
    // display(root2);
    add(root1,root2);
}

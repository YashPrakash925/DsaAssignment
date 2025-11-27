#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *left,*right;
	Node(int x){
		data=x;
		left=right=NULL;
	}
};
Node* insertNode(Node *t,int x){
	if(!t) return new Node(x);
	if(x<t->data) t->left=insertNode(t->left,x);
	else if(x>t->data) t->right=insertNode(t->right,x);
	return t;
}
int maxDepth(Node *t){
	if(!t) return 0;
	return 1+max(maxDepth(t->left),maxDepth(t->right));
}
int main(){
	Node *t=NULL;
	t=insertNode(t,50);
	t=insertNode(t,30);
	t=insertNode(t,70);
	t=insertNode(t,20);
	t=insertNode(t,40);
	t=insertNode(t,60);
	t=insertNode(t,80);
	cout<<maxDepth(t);
}

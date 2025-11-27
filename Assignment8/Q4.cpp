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
bool isBST(Node* r,int mn,int mx){
	if(r==NULL) return 1;
	if(r->data<=mn || r->data>=mx) return 0;
	return isBST(r->left,mn,r->data) && isBST(r->right,r->data,mx);
}
int main(){
	Node* r=new Node(10);
	r->left=new Node(5);
	r->right=new Node(15);
	r->right->left=new Node(12);
	r->right->right=new Node(20);
	if(isBST(r,INT_MIN,INT_MAX)) cout<<"BST";
	else cout<<"Not BST";
}

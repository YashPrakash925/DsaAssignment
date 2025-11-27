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
int sumOfLeftLeaves(Node *t){
	if(!t) return 0;
	int s=0;
	if(t->left && !t->left->left && !t->left->right) s+=t->left->data;
	return s+sumOfLeftLeaves(t->left)+sumOfLeftLeaves(t->right);
}
int main(){
	Node *t=new Node(3);
	t->left=new Node(9);
	t->right=new Node(20);
	t->right->left=new Node(15);
	t->right->right=new Node(7);
	cout<<sumOfLeftLeaves(t);
}

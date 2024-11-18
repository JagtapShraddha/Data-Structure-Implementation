#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createNode(int data){
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d->",root->data);
		inorder(root->right);
	}
}
void main(){
	struct node *p=createNode(1);
	struct node *p1=createNode(2);
	struct node *p2=createNode(3);
	struct node *p3=createNode(4);
	struct node *p4=createNode(5);
	struct node *p5=createNode(6);
	struct node *p6=createNode(7);
	struct node *p7=createNode(8);
	
	p->left=p1;
	p1->left=p2;
	p2->left=p3;
	p2->right=p4;
	p1->right=p5;
	p5->left=p7;
	p7->right=p6;
	
	inorder(p);
	

}

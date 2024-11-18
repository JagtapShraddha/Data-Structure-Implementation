#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;

};
struct node* createNode(int data){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d->",root->data);
	}
}
void main(){
	struct node *p=createNode(11);
	struct node *p1=createNode(12);
	struct node *p2=createNode(13);
	struct node *p3=createNode(14);
	struct node *p4=createNode(15);
	struct node *p5=createNode(16);
	struct node *p6=createNode(17);
	struct node *p7=createNode(18);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p3->left=p5;
	p2->left=p6;
	p2->right=p7;
	
	postorder(p);
	printf("\n");
	
	
}

#include<stdio.h>
#include<stdlib.h>

struct node {
	char ch;
	struct node* left;
	struct node* right;
	
};
struct node* createNode(char ch){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->ch=ch;
	n->left=NULL;
	n->right=NULL;
	return n;
	
}
void preorder(struct node *root){
	if(root!=NULL){
		printf("%c ",root->ch);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%c->",root->ch);
		inorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%c->",root->ch);
	}
}

void main(){
	struct node *p=createNode('A');
	struct node *p1=createNode('B');
	struct node *p2=createNode('C');
	struct node *p3=createNode('D');
	struct node *p4=createNode('E');
	struct node *p5=createNode('F');
	struct node *p6=createNode('G');
	struct node *p7=createNode('H');
	struct node *p8=createNode('I');
	struct node *p9=createNode('J');
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	p3->left=p7;
	p4->left=p8;
	p4->right=p9;
	
	preorder(p);
	printf("\n");
	inorder(p);
	printf("\n");
	postorder(p);
	

}

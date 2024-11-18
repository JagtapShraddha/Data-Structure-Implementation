#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
void preorder(struct node *root){
	if(root==0){
		return;
		}
		
	
	printf("%d->",root->data);
	preorder(root->left);
	preorder(root->right);
}

struct node* create(){
	int x;
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data(enter -1 for no node)\n");
	scanf("%d",&x);
	if(x==-1){
		free(newNode);
		return NULL;
	}
	newNode->data=x;
	printf("Enter the left child of %d\n",x);
	newNode->left=create();
	printf("Enter the right child of %d\n",x);
	newNode->right=create();
	return newNode;
}
int main(){
	struct node* root;
	root=create();
	preorder(root);
	return 0;

}

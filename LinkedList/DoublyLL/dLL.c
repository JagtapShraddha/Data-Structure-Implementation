#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node* createNode(int n){
	struct node *head =(struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter the data\n");
	scanf("%d",&data);
	head->data = data;
	head->prev = NULL;
	head->next = NULL;
	
	struct node *temp = head;
	int i=1;
	while(i<n){
		struct node *newNode =(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&data);
		newNode->data = data;
		newNode->prev = temp;
		newNode->next = NULL;
		temp->next = newNode;
		temp = temp->next;
		i++;
		
	}
	
	return head;
}
void display(struct node *head ){
	struct node *temp=head;
	while(temp!=NULL){
		printf("<-%d->",temp->data);
		temp=temp->next;
	}
}
int main(){
	int n;
	printf("Enter how many nodes  want\n");
	scanf("%d",&n);
	struct node *head = createNode(n);
	display(head);
}

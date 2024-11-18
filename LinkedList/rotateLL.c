#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	//struct node *prev;
};
struct node *createNode(int n){
	int data;
	printf("Enter the data\n");
	scanf("%d",&data);
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = data;
	//head->pre = NULL;
	head->next =NULL;
	struct node *ptr=head;
	int i=1;
	while(i<n){
		struct node *newNode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&data);
		newNode->data = data;
		newNode->next = NULL;
		ptr->next = newNode;
		ptr = ptr->next;
		i++;
	} 
	return head;
	
}
void display(struct node *head){
	struct node *ptr = head;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr = ptr->next;
	}
	
}
struct node *rotate(struct node *head,int place){
	struct node* ptr = head;
	int i=0;
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next = head;
	while(i<place){
		ptr=ptr->next;
		i++;
	}
	struct node *temp=ptr->next;
	ptr->next=NULL;
	head = temp;
	return head;
	
}
int main(){
	printf("Enter how many nodes u want\n");
	int n;
	scanf("%d",&n);
	struct node *head=createNode(n);
	display(head);
	printf("\n");
	head = rotate(head,2);
	display(head);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createNode(int n){
	printf("Enter the data\n");
	int data;
	scanf("%d",&data);
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data=data;
	head->next=NULL;
	
	struct node *ptr = head;
	int i=1;
	while(i<n){
		struct node *newNode = (struct node *)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&data);
		newNode->data = data;
		newNode->next=NULL;
		ptr->next = newNode;
		ptr = ptr->next;
		i++;
	}
	return head;
	
}
 int length(struct node *head){
 	struct node *ptr=head;
 	int count=0;
 	while(ptr!=NULL){
 		count++;
 		ptr=ptr->next;
 	}
 	return count;
 }
 int main(){
 	printf("Enter how many nodes u want");
 	int n;
 	scanf("%d",&n);
 	struct node *head = createNode(n);
 	int l=length(head);
 	printf("%d",l);
 	
 	return 0;
 }

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createNode(int n){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter the data\n");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	struct node *ptr=head;
	int i=1;
	
	while(i<n){
		struct node *newNode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&data);
		newNode->data=data;
		newNode->next=NULL;
		ptr->next=newNode;
		ptr=ptr->next;
		i++;
	}
	return head;
	
}
void display(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}

struct node* deleteFirst(struct node *head){
	head=head->next;
	return head;
}

void deleteLast(struct node *head){
	struct node *ptr=head;
	struct node *previous;
	while(ptr->next!=NULL){
		previous=ptr;
		ptr=ptr->next;
	}
	previous->next=NULL;
}

void deleteRandom(struct node *head,int pos){
	int i=0;
	struct node *ptr=head;
	struct node *previous;
	struct node *Next;
	while(i<pos){
		previous = ptr;
		ptr = ptr->next;
		Next = ptr->next;
		i++;
	}
	previous->next=Next;
	
}

int main(){
	int n;
	printf("Enter the Number of Nodes\n");
	scanf("%d",&n);
	struct node* head= createNode(n);
	display(head);
	printf("null\n");
	head=deleteFirst(head);
	display(head);
	printf("null\n");
	deleteLast(head);
	display(head);
	printf("null\n");
	deleteRandom(head,3);
	display(head);
	printf("null\n");
	
	return 0;
}

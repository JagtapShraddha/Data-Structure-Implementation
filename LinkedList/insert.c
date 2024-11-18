#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *createNode(int n){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	printf("Enter the head\n");
	int data;
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	struct node *ptr=head;
	int i=1;
	
	while(i<n){
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&data);
		newNode->data=data;
		ptr->next=newNode;
		newNode->next=NULL;
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

struct node *insertFirst(struct node* head,int data){
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	
		
		ptr->data=data;
		ptr->next=head;
	
	return ptr;
}

void insertLast(struct node* head,int data){
	struct node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	ptr->next=newNode;
	newNode->next=NULL;

}

void insertRandom(struct node *head,int data,int pos){
	int i=1;
	struct node *ptr=head;
	while(i<pos){
		ptr=ptr->next;
		i++;
	}
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	temp=ptr->next;
	newNode->next=temp;
	ptr->next=newNode;
	
	
	
}

int main(){
	int n;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	struct node *head=createNode(n);
	display(head);
	printf("null\n");
	
	head=insertFirst(head,10);
	display(head);
	printf("null\n");
	
	insertLast(head,20);
	display(head);
	printf("null\n");
	
	insertRandom(head,30,3);
	display(head);
	printf("null\n");
	
	return 0;
}

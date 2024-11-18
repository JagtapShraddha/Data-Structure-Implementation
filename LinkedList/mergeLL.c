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
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data\n");
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

struct node *merge(struct node *head1,struct node *head2){
	struct node *head;
	struct node *ptr;
	if(head1==NULL){ return head2;}
	if(head2==NULL){ return head1;}
	
	if(head1->data < head2->data){
		head = head1;
		head1 = head1->next;
	}
	else{
		head =head2;
		head2 = head2->next;
	}
	ptr=head;
	while(head1!=NULL && head2!=NULL){
		if(head1->data < head2->data){
			ptr->next = head1;
			head1 = head1->next;
		}
		else{
			ptr->next = head2;
			head2 = head2->next;
		}
		ptr = ptr->next;
	}
	if(head1!=NULL){
		ptr->next=head1;
	}
	if(head2!=NULL){
		ptr->next=head2;
	}
	
	return head;
}

int main(){
	int n;
	printf("Enter Number of Elements\n");
	scanf("%d",&n);
	struct node *head1=createNode(n);
	struct node *head2=createNode(n);
	display(head1);
	printf("null\n");
	display(head2);
	struct node *head = merge(head1,head2);
	display(head);
	return 0;
}

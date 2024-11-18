#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *createNode(int n){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter the head node\n");
	scanf("%d",&data);
	head->data = data;
	head->next = NULL;
	struct node *ptr=head;
	
	int i=1;
	while(i<n){
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d->",&data);
		newNode->data=data;
		ptr->next=newNode;
		newNode->next=NULL;
		
		ptr=ptr->next;
		i++;
	} 
	return head;
}

void display(struct node* head){

	struct node *ptr=head;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=NULL);

}
struct node* revLL(struct node *head){
	struct node *previous=NULL;
	struct node *current=head;
	struct node *Next;
	
	while(current!=NULL){
		Next=current->next;
		current->next=previous;
		previous=current;
		current=Next;
		
		
	
		}
		head=previous;
	return head;
}
int main(){
	printf("Enter how many nodes u want\n");
	int n;
	scanf("%d",&n);
	struct node *head=createNode(n);
	display(head);
	printf("\n");
	head=revLL(head);
	display(head);
	return 0;
}

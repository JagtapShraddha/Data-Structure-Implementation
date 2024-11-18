#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node *createNode(int n){
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter head node\n");
	scanf("%d",&data);
	head->data=data;
	head->next=NULL;
	struct Node *ptr=head;
	int i=1;
	while(i<n){
		struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
		printf("Enter data\n");
		scanf("%d",&data);
		newNode->data=data;
		ptr->next=newNode;
		newNode->next=NULL;
		ptr=ptr->next;
		i++;
	}
	return head;
}
void displayNode(struct Node *head){
	struct Node *ptr=head;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=NULL);
}
int main(){
	int n;
	printf("Enter Number of Nodes\n");
	scanf("%d",&n);
	struct Node *head=createNode(n);
	displayNode(head);
	
	return 0;
}

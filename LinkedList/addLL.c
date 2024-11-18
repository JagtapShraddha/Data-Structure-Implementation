#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* createNode(int n){
	struct node *head=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter the data of head\n");
	scanf("%d",&data);
	head->data = data;
	head->next = NULL;
	struct node *ptr;
	ptr = head;
	
	int i=1;
	
	while(i<n){
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		printf("Enter new node data\n");
		scanf("%d",&data);
		newNode->data = data;
		ptr->next = newNode;
		newNode->next = NULL;
		ptr = ptr->next;
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
int add(struct node *head){
	struct node *ptr=head;
	int sum=0;
	while(ptr!=NULL){
		int data=ptr->data;
		sum=sum+data;
		ptr=ptr->next;
	}
	return sum;
}

int main(){
	int n;
	printf("Enter how many nodes\n");
	scanf("%d",&n);
	struct node* head = createNode(n);
	display(head);
	printf("sum=%d",add(head));
	return 0;
}

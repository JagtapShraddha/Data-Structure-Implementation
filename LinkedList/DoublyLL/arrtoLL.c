#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* prev;
	struct node* next;
};

struct node* arrtoLL(int *arr,int size){
	struct node * head = (struct node*)malloc(sizeof(struct node));
	int i = 0;
	if(size>0){
		head->data = arr[i];
		head->prev = NULL;
		head->next = NULL;
		
		struct node *ptr = head;
		
		for(int i = 1; i < size; i++){
			struct node *newNode = (struct node*)malloc(sizeof(struct node));
			newNode->data = arr[i];
			newNode->prev = ptr;
			newNode->next = NULL;
			ptr->next = newNode;
			ptr = ptr->next;
		}
		return head;
		}
}
void display(struct node *head){
	struct node *ptr = head;
	while(ptr!=NULL){
		printf("<-%d->",ptr->data);
		ptr = ptr->next;
	}
}
void displayRev(struct node *head){
	struct node *ptr = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	while(ptr!=NULL){
		printf("<-%d->",ptr->data);
		ptr=ptr->prev;
	}
}
int main(){
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	struct node *head = arrtoLL(arr,size);
	display(head);
	printf("\n");
	displayRev(head);
}

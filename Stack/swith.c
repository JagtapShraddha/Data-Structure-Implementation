#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct stack{
	int top;
	int size;
	int *arr;
	
};
bool isEmpty(struct stack *s){
	if(s->top == -1 ){
		return true;
	}
	return false;
}

bool isFull(struct stack *s){
	if(s->top == s->size-1){
		return true;
	}
	return false;
}

void push(struct stack *s){
	int val;
	printf("Enter the value\n");
	scanf("%d",&val);
	if(isFull(s)){
		printf("stack overflow\n");
	}
	else{
		s->top++;
		s->arr[s->top] = val;
	}
	
}

int pop(struct stack *s){
	if(isEmpty(s)){
		printf("stack underflow\n");
		
	}
	else{
		int val = s->arr[s->top];
		s->top--;
		return val;
	}
}

void display(struct stack *s){
	int size = s->top;
	while(size>-1){
		printf("%d",s->arr[size]);
		size--;
	}
}

int peek(struct stack *s,int pos){
	int i = (s->top-pos)+1;	
	if(i < 0){
		printf("invalid position\n");
	}
	else{
		return s->arr[i];
	}
}

int main(){
	struct stack *s = (struct stack *)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(s->size * sizeof(int));
	
	
	
	while(true){
		
		printf("Enter Your Choice\n");
	int ch;
	scanf("%d",&ch);
		
		switch(ch){
		
		case 1:
			push(s);
			break;
		case 2:
			int val=pop(s);
			printf("%d",val);
			break;
		case 3:
			display(s);
			break;
		case 4:
			val=peek(s,3);
			printf("%d",val);
			break;
		case 5:
			exit(0);
		default:
			printf("\nInvalid Choice\n");
		}
	}
}

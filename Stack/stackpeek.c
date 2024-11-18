#include<stdio.h>

struct stack {
	int top;
	int size;
	int *arr;
	};
	
int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
	return 1;
	}
	else{
	return 0;
	}
}

int isFull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
	
void push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("stack overflow");
		}
	else{
	ptr->top++;
	ptr->arr[ptr->top]=val;
	}
}

int pop(struct stack *ptr){
	if(isEmpty(ptr)){
		printf("stack underflow");
	}
	else{
		int val=ptr->top;
		ptr->top--;
		return val;
	}
}

int peek(struct stack *ptr,int i){
	int pos=ptr->top-i+1;
	if(pos < 0){
		printf("invalid input");
	}
	else{
		
		return ptr->arr[pos];	
	}
}

int main(){
	struct stack *s;
	s=(struct stack *)malloc(sizeof(struct stack));
	s->size=10;
	s->top=-1;
	s->arr=(int *)malloc(sizeof(int));
	
	push(s,10);
	push(s,20);
	push(s,30);
	push(s,40);
	push(s,50);
	
	for(int i=1;i<s->top+2;i++){
	printf("%d",peek(s,i));
	}
	
}

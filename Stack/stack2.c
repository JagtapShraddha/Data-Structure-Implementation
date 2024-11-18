#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
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
	if(ptr->top == ptr->size-1){
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
		int val=ptr->arr[top]
		ptr->top--;
		return val;
	}
	
	}
int main(){
	struct stack *sp;
	sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size = 5;
	sp->top = -1;
	sp->arr = (int *)malloc(sizeof(int));
	
	push(sp,10);
	push(sp,11);
	push(sp,12);
	push(sp,13);
	push(sp,14);
	printf("%d",isFull(sp));
	printf("%d",isEmpty(sp));
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define str_size 10
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
	sp->size = 50;
	sp->top = -1;
	sp->arr = (int *)malloc(sizeof(int));
	
	char ch[10]="(9-(3+8)*7)";
	for(int i=0;i<sizeof(ch)/sizeof(ch);i++){
		if(ch[i]=="("){
			push(sp,ch[i]);
			
		}
		else if(ch[i]==")"){
				if(isEmpty(sp)){
						
						}
				else{
					pop(sp);
				}
		}
	}
	
	return 0;
}

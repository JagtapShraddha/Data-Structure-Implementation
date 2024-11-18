#include<stdio.h>
#include<stdlib.h>
struct queue{
	int data;
	int front;
	int rare;
	int size;
	int *arr;
	};
void enqueue(struct queue *q,int val){
	if(isFull(q)){
		printf("Queue is full");
	}
	else{
		q->rare++;
		q->arr[q->rare]=val;
	}
}

int dequeue(struct queue *q){
	int a=-1;
	if(isEmpty(q)){
		printf("Queue is Empty");
	}
	else{
		q->front++;
		a=q->arr[q->front];
	}
	return a;
}

int isFull(struct queue *q){
	if(q->rare==q->size-1){
		return 1;
	}
	return 0;
}

int isEmpty(struct queue *q){
	if(q->front==q->rare){
		return 1;
	}
	return 0;
}
void main(){
	struct queue q;
	q.size=100;
	q.front=-1;
	q.rare=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));


	enqueue(&q,12);
	enqueue(&q,15);
	printf("%d",dequeue(&q));
	
	if(isEmpty(&q)){
		printf("Queue is Empty\n");
	}
	if(isFull(&q)){
		printf("Queue is Full\n");
	}
	

}

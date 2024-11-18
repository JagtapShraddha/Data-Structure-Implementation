#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int rear;
	int front;
	
	int *arr;
	
};
int isFull(struct queue *q){
	if((q->rear+1)%q->size==q->front){
		return 1;	
	}
	return 0;
}
int isEmpty(struct queue *q){
	if(q->rear==q->front){
		return 1;
	}
	return 0;
}
void enqueue(struct queue *q,int val){
	if(isFull(q)){
		printf("queue is Full\n");
	}
	else{
		q->rear=(q->rear+1)%q->size;
		q->arr[q->rear]=val;
		 printf("Enqued element: %d\n", val);
	}

}
int dequeue(struct queue *q){
	int val=-1;
	if(isEmpty(q)){
		printf("queue is Empty\n");
	}
	else{
		
		q->front=(q->front+1)%q->size;
		val=q->arr[q->front];
		
	}
	return val;

}
int main(){

	struct queue q;
	q.size=4;
	q.rear=0;
	q.front=0;
	q.arr=(int*)malloc(q.size*sizeof(int));
	enqueue(&q,10);
	enqueue(&q,11);
	enqueue(&q,12);
	
	  printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    
     if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}

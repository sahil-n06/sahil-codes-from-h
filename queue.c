#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct queue{
  int front;
  int rear;
  int size;
  int capacity;
  int *array;
};
struct queue create(struct queue *q){
  printf("Enter the capacity of queue : ");
  scanf("%d",&q->capacity);
  q->front=-1;
  q->rear=-1;
  q->size=0;
  q->array=(int *)malloc(sizeof(int)*q->capacity);
}
bool isfull(struct queue *q){
  if(q->rear==q->capacity-1)
  return true;
  else
  return false;
}
bool isempty(struct queue *q){
  if(q->front==q->rear)
  return true;
  else
  return false;
}
void enqueue(struct queue *q,int data){
  if(isfull(q)==true)
  printf("Overflow");
  else{
      int k=q->rear++;
      q->size++;
    q->array[k]=data;
  }
}
void dequeue(struct queue *q){
  int x=-1;
  if(isempty(&q)==true)
  return x;
  else{
    x=q->array[q->front];
     q->front++;
    q->size--;
  }
  return x;
}
void display(struct queue *q){
  for(int i=q->front;i<q->rear;i++){
    printf("%d\t",q->array[i]);
  }
}
void main(){
  struct queue q;
  create(&q);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  display(&q);

}

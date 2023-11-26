//Should follow fifo principle

#include<stdio.h>
#define max 100

int arr[max];
int front = -1;
int rear = -1;

int isempty(){
  if (front == -1 && rear == -1){
    return 0;
  }else{
    return 1;
  }
}

void enqueue(int x){
  if(rear+1<max){ 
    if(!isempty()){
      front ++;
      rear ++;
      arr[rear] = x;
    }else{
      rear++;
      arr[rear] = x;
    }
  }else{
    printf("Buffer overflow ");
  }

}

void dequeue(){
  if(rear == front){
    front = -1;
    rear = front;
  }else if(front == -1){
    printf("bufferunderflow");
  }else{
    front+=1;
  }
  return;
}

void print(){
  for(int i = front; i<=rear;i++){
    printf("%d ",arr[i]);
  }
  return;
}

void main(){
  for(int i = 0;i<5;i++){
    enqueue(i+1);
  }
  print();
  printf("\nDequeuing an element\n");
  dequeue();
  print();
  printf("\nEnqueueing 6\n");
  enqueue(6);
  print();
}

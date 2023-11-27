#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void print(){
  struct Node* temp = head;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
}

void enqueue(int x){
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  if(head == NULL){
    head = tail = temp;
    return;
  }else{
    tail->next = temp;
    tail = temp;
  }
}

void dequeue(){
  if(head == NULL){
    printf("Empty queue");
    return;
  }
  struct Node* temp = head;
  head = head->next;
  free(temp);
  
}

void main(){
  for(int i = 0;i<5;i++){
    enqueue(i);
  }
  print();
  dequeue();
  printf("\nDequeuing an element: \n");
  print();
}

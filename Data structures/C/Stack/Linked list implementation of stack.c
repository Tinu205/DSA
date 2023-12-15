#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};

struct node* top = NULL;

void push(int x){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data =x;
  temp->next = top;
  top = temp;
}

void pop(){
  struct node* temp;
  if(top == NULL){
    printf("Empty stack can't pop anything");
    return;
  }
  //struct node* q = (struct node*)malloc(sizeof(struct node));
  //q = temp->next;
  temp = top;
  top = top->next;
  free(temp);
}

void print(){
  struct node* temp =top;
  while(temp->next!=NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
}

void main(){
  for(int i=0;i<5;i++){
    push(i);
  }
  printf("Elements in the stack: ");
  print();
  printf("\nAfter popping elemtents in the stack: ");
  pop();
  print();
}

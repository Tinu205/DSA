/*
 1. Fix the links
 2. Free the mem


 */
#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void append(int val){
  struct Node* temp1  = (struct Node*)malloc(sizeof(struct Node));
  temp1->data = val;
  temp1->next = NULL;
  if(head == NULL){
    head = temp1;
  }else{
    struct Node* temp2 = head;
    while(temp2->next != NULL){
      temp2 = temp2->next;
    }
    temp2->next = temp1;  
  }
}

void print(){
  struct Node* current=head;
  while(current->next != NULL){
    printf("%d ",current->data);
    current = current->next;
  }
  printf("\n");
}

void rem(int val){
  struct Node* temp = head;
  for(int i = 0; i<val-2;i++){
    temp = temp->next;      
  }
  struct Node* temp2=temp->next;
  temp->next = temp2->next;
  free(temp2);
   
}
void main(){
  head = NULL;
  append(0);
  append(1);
  append(2);
  append(3);
  append(4);
  print();
  rem(3);
  print();
}

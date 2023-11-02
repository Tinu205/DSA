#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;

//inserting an element at the end
void insert(int data){
  struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;
  if(head = NULL){
    head = temp;
    return;
  }
  struct Node* current = head;
  while(current != NULL){
    current = current->next;
  }
  current->next = temp;
}

//Recursion for printing normally
void normal(struct Node *head){
  if(head == NULL){
    return;
  }
  printf("%d",head->data);
  normal(head->next);
}

void main(){
  for(int i=0;i<5;i++){
    insert(i+1);
  }
  normal(head);
}

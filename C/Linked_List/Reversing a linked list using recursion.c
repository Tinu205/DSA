#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void insert(int val){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = val;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
    printf("Head inserted\n");
    return;
  }
  struct Node* temp2 = head;
  while(temp2->next != NULL){
    temp2 = temp2->next;
    //printf("%d inserted\n",temp2->data);
  }
  temp2->next = temp;
}

void print(){
  struct Node* temp = head;
  while(temp->next != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
}

void reverse_print(){
  struct Node* temp = head;
  if(temp->next == NULL){
    head = temp;
    return;
  }
}
void main(){
  head = NULL;
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  print();
  printf("\nReverse \n");
  //reverse_print();
  print();
}

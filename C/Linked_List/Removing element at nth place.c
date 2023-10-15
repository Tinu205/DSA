/*
 1. Fix the links
 2. Free the mem


 */
#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
}

struct Node head;

void append(int val){
  struct Node temp1  = (struct Node*)malloc(sizeof(struct Node));
  temp1->data = val;
  temp1->next = NULL;
  if(head == NULL){
    head = temp1;
  }else{
    struct Node temp2 = head;
    while(temp2->next != NULL){
      temp2 = temp2->next;
    }
    temp2->next = temp1;  
  }
}

void print(){
  struct Node current=head;
  while
}
void main(){
  head = NULL;
}

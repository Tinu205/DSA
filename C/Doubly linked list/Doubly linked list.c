#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* prev;
  struct node* next;
};

struct node* head;

struct node* getnewnode(int x){
  struct node* newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = NULL;
  newnode->prev = NULL;
  return newnode;
}

void insert_at_head(int x){
  struct node *newnode = getnewnode(x);
  if(head == NULL){
    head = newnode;
    return;
  }
  head->prev = newnode;
  newnode->next = head;
  head = newnode;  
}

void print(){
  struct node* temp = head;
  while(temp->next != NULL);
  {
    printf("%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void main(){
  head = NULL;
  insert_at_head(1);
  insert_at_head(1);  
}

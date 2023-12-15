#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* prev;
  struct node* next;
};

struct node* head;

struct node* getnewnode(int x){
  //printf("Get newnode called");
  struct node* newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = NULL;
  newnode->prev = NULL;
  return newnode;
}

void insert_at_head(int x){
  //printf("Inserted at the head called");
  struct node *newnode = getnewnode(x);
  if(head == NULL){
    head = newnode;
    //printf("Inserted");
    return;
  }
  head->prev = newnode;
  newnode->next = head;
  head = newnode;  
  //printf("Inserted");
}

void insert_at_tail(int x){
  struct node* newnode = getnewnode(x);
  struct node* temp = head;//to traverse
  if(head == NULL){
    printf("Empty linked list so added at the head \n");
    head = newnode;
    return;
  }
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->prev = temp;
}

void print(){
  struct node* temp = head;
  while(temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void reverse_print(){
  struct node *temp = head;
  while(temp != NULL && temp->next != NULL){
    temp = temp->next;
  }
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->prev;
  }
  printf("\n");
}
void main(){
  head = NULL;
  for(int i=1;i<5;i++){
    insert_at_tail(i);
  }
  insert_at_head(0);
  printf("In oreder: ");
  print();
  printf("In reverse : ");
  reverse_print();
}


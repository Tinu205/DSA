#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void insert(int val,int pos){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = val;
  temp->next = NULL;
  if(pos == 1){
    temp->next = head;
    head = temp;
    return;
  }
  struct Node* temp2 = head;
  for(int i=0;i<pos-2;i++){
    temp2 = temp2->next;
  }
  temp->next = temp2->next;
  temp2->next = temp;

}

void reverse(){
  struct Node *prev,*current,*next;
  current = head;
  prev = NULL;
  while(current != NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

void print(){
  struct Node* temp = head;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
}

void main(){
  head = NULL;
  insert(0,1);
  insert(1,2);
  insert(2,3);
  insert(3,4);
  insert(4,5);
  insert(5,6);
  printf("Before reversing: \n");
  print();
  printf("\nAfter reversing: \n");
  reverse();
  print();
}

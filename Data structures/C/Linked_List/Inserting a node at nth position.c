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
  if(val == 1){//inserts at the beginning even if its null;
    temp->next = head;
    head = temp;
    return;
  }
  struct Node* temp2 = head;
  for(int i=0;i<pos-2;i++){//loop till n-2 to stop at n-1th element
    temp2 = temp2->next;
  }
  temp->next = temp2->next;
  temp2->next = temp;
}

void print(){
  struct Node* current=head;
  while(current != NULL){
    printf(" (%p)%d->%p",&(current->data),current->data,current->next);
    current=current->next;
    printf("\n");
  }
}
void main(){
  head = NULL;
  insert(1,1);
  insert(2,2);
  insert(3,3);
  insert(4,4);
  print();
}

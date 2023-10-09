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
  }else{
    struct Node* temp2 = head;
    for(int i=0;i<pos-2;i++){
      temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
  }
}

void print(){
 struct Node* temp = head;  
  while(temp->next != NULL){
    printf("%d",temp->data);
    temp = temp->next;
  }
   printf("\n");
}

void main(){
  head = NULL;
  insert(1,1);
  insert(2,2);
  insert(3,3);
  print();
}

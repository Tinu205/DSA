#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

void print(){
  struct node* temp = head;
  while(temp->next != NULL){
    printf("%d",temp->data);
    temp = temp->next;
  }
}

void main(){

}

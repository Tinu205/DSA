#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node head;

void insert(int val){
  struct Node* temp = (struct Node*)malloc(sizeof);
  temp->data = val;
  temp->next = NULL;
  if(val == 1){
    temp->next = head;
    head = temp;
    return;
  } 

}

void reverse(){

}

void main(){
  head = NULL;
  insert(0);
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  reverse();
}

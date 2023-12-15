#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void insert(int val){
  struct Node* temp = (struct Node*)(malloc(sizeof(struct Node)));
  temp->data = val;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
  }else{
    struct Node* current = head;
    while(current->next!=NULL){
      current = current->next;
    }
    current->next = temp;
  }
}

void print(){
  struct Node* temp = head;
  while(temp!=NULL){
    printf("%d",temp->data);
    temp = temp->next; 
  }
  printf("\n");
}

void main(){
  printf("Enter the number of elements to append: ");
  int a;

  scanf("%d",&a);
  for(int i=0; i<a; i++){
    printf("Enter the value to append: ");
    int val;
    scanf("%d",&val);
    insert(val);
    print();
  }
  }

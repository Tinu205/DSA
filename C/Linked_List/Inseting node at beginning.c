#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;  
};

struct Node*  head;//creating a head node

void insert(int x){
  struct Node* temp = (struct Node*)(malloc(sizeof(struct Node)));
  temp->data = x;
  temp->next = head;
  head = temp;

}

void Print(){
  struct Node* temp = head;
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
}

void main(){
  head = NULL;
  printf("Enter the number of numbers to be entered: ");
  int n,i;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("\nEnter a number: ");
    int x;
    scanf("%d",&x);
    insert(x);
    Print();
  }
}

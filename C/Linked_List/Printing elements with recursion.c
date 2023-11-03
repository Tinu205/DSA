#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

//Inserting elements at the end
void insert(int a){
  struct Node* temp = (struct Node*)(malloc(sizeof(struct Node)));
  temp->data = a;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
    return;
  }
   struct Node* current = head;
   while(current->next != NULL){
     current = current->next;
   }
   current->next = temp;
}

//Printing the elements in order
void normal(struct Node* val){
  struct Node* temp = val;
  if(temp == NULL){
    printf("\nEnd of the linked list");
    return;
  }
  printf("%d ",temp->data);
  normal(temp->next);
}

//Printing in reverse elements in order
void reverse(struct Node* val){
  struct Node* temp = val;
  if(temp == NULL){
    return;
  }
 
  reverse(temp->next);
  printf("%d ",temp->data);
}
void main(){
  head = NULL;
  insert(1);
  insert(2);
  insert(3);
  printf("Printing linked list in normal order: ");
  normal(head);
  printf("\nPrinting the linked list in reverse order: ");
  reverse(head);
}































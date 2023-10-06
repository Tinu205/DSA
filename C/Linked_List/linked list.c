#include<stdio.h>
#include<stdlib.h>
int main(){
  struct Node
  {
    int data;
    struct Node* link; //creates a pointer which points to another Node
  };
  struct Node* a;
  a= NULL;
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //dynamically allocates the memory to temp with sizeof node 
  temp->data = 2;
  temp->link= NULL;
  a = temp;
  printf("%d",a->data);
}

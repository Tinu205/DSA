#include<stdio.h>

int main(){
  struct Node
  {
    int data;
    struct Node* link;
  };
  Node* a;
  a= NULL;
  Node* temp = (Node*)malloc(sizeof(Node));
  temp->data = 2;
  temp->link= NULL;
  a = temp;

}

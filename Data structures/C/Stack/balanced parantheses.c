#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
  char data;
  struct node* next;
};

struct node* top;

void push(char x){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = x;
  temp->next = top;
  top=temp;
}

void pop(){
  struct node* temp = top;
  if(top != NULL){
    top = top->next;
    free(temp);
  }
}

void print(){
  struct node* temp = top;
  while(temp!=NULL){
    printf("%c",temp->data);
    temp = temp->next;
  }  
}

void check_balance(char *a){
  int bal = 0;
  for(int i=0;i<strlen(a);i++){
    if(a[i]=='(' || a[i]=='{' || a[i]=='['){
      push(a[i]);
    }else{
      if((a[i]==']' && top->data=='[') || (a[i]=='}' && top->data=='{') || (a[i]==')' && top->data=='(')){
        pop();
      }else{
        printf("Unbalanced");
        return ;
      }
    }
  }
  if(top == NULL){
    printf("Balanced");
  }else{
    printf("Unbalanced");
  }
  //printf("STACK: ");
  //print();
}
void main(){
  char a[100];
  printf("Enter the expression: ");
  scanf("%s",a);
  check_balance(a);
  }

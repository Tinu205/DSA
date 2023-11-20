#include<stdio.h>

#define max 101

int a[max];
int top = -1;

void push(int x){
  if(top<max){
    a[++top] = x;
  }else{
    printf("Stack overflow\n");
  }
}

void pop(){
  if(top == -1){
    printf("No element to top\n");
    return;
  }
  top--;
}

void topp(){
  if(top != -1){
    printf("%d\n",a[top]);
  }else{
    printf("Empty stack\n");
  }
}

void print(){
  if(top != -1){ 
    for(int i = 0;i<=top;i++){
      printf("%d ",a[i]);
    }
  }else{
    printf("Empty stack\n");
  }
}

void main(){
  print();
  for(int i = 0;i<5;i++){
    push(i);
  }
  print();
  printf("\nElement at top is ");
  topp();
  printf("\nPopping an element\n");
  pop();
  print();
}

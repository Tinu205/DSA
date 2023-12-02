#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

struct Node* getNewnode(int val){
  struct Node* root = (struct Node*)malloc(sizeof(struct Node));
  root->data =  val;
  root->left = NULL;
  root->right = NULL;
  return root;
}

void insert(struct Node** root, int val){
  struct Node* temp = getNewnode(val);
  if(*root == NULL){
    *root = temp;
  }else if((*root)->data < val){
    insert(&(*root)->right,val);
  }else{
    insert(&(*root)->left,val);
  }
}

int search(struct Node** root,int val){
  int value = 0;
  if((*root)->data == val){
    value = 1;
  }else if((*root)->data > val){
    value=search(&(*root)->left,val);
  }else{
    value=search(&(*root)->right, val);
  }
  return value;
}

void main(){
  struct Node* root = NULL;
  insert(&root,5);
  insert(&root,6);
  insert(&root,4);
  //struct Node* temp = root->left;
  //printf("%d",temp->data);
  int result = search(&root,4);
  if(result == 1){
    printf("Element found");
  }else{
    printf("Element not found");
  }
}

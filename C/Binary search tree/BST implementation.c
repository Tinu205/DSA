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
  root ->left = NULL;
  root -> right = NULL;
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

void main(){
  struct Node* root = NULL;
  insert(&root,5);
  insert(&root,6);
  insert(&root,4);
  struct Node* temp = root->left;
  printf("%d",temp->data);
}

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* right;
  struct node* left;
};

//struct node root = NULL;

struct node* getnewnode(int val){
  struct node* new=(struct node*)malloc(sizeof(struct node));
  new->data = val;
  new->right = NULL;
  new->left = NULL;
  return new;
}

void insert(struct node** root, int val){
  struct node* new = getnewnode(val) ;
  if(*root == NULL){
    *root = new;
  }else if((*root)->data < val){
    insert(&(*root)->right,val);  
  }else{
    insert(&(*root)->left,val);
  }
}

void max(struct node** root){
  while((*root)->right != NULL){
    (*root) = (*root)->right;
  }
  printf("Max value is: %d",(*root)->data);
}

void min(struct node** root){
  while((*root)->left != NULL){
    (*root) = (*root)->left;
  }
  printf("Min value is: %d",(*root)->data);
}
void main(){
  struct node* root = NULL;
  //struct node* ro = &root;
  insert(&root,5);   
  insert(&root,4); 
  insert(&root,6); 
  insert(&root,3); 
  insert(&root,2); 
  insert(&root,7); 
  insert(&root,8);
  max(&root);
  printf("\n");
  min(&root);
  //printf("%p",(root->left));
}

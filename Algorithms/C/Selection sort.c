#include<stdio.h>
#include<stdlib.h>

void Selectionsort(int *arr,int n){
  for(int i=0;i<n;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

void main(){
  int size;
  printf("Enter size of unsored array: ");
  scanf("%d",&size);
  int *arr = (int *)malloc(size*sizeof(int));
  
  for(int i=0;i<size;i++){
    int val;
    printf("\nEnter %d-th element: ",i);
    scanf("%d",&val);
    arr[i] = val;
    //printf("\n");
  }
  

  printf("Sorter Array: ");
  Selectionsort(arr,size);
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }

  free(arr);
}

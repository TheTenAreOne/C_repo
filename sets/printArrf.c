#include "main.h"

void printArrf(int arr[], int size){
  int i;
  printf("{");
  for(i = 0; i < size; i++){
    printf("%d", arr[i]);
    if(i!=size-1) printf(",");
  }
  printf("}\n");

  return;
}

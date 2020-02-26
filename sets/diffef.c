#include "main.h"

void diffef(int arrA[], int arrB[], int aSize, int bSize){

  int i, j, count, isThere, cSize;
  int *arrC = (int*)malloc(sizeof(int));
  cSize = 1;
  count = 0;

  for(i = 0; i < aSize; i++){
    isThere = 0;
    for(j = 0; j < bSize; j++){
      if(arrA[i]==arrB[j]){
        isThere = 1;
        break;
      }
    }
    if(!isThere){
      if(count>=cSize){
        arrC = (int*)realloc(arrC,(cSize+1)*sizeof(int));
        cSize++;
      }
      *(arrC+count) = arrA[i];
      count++;
    }
  }

  printArrf(arrC, cSize);

  return;
}

#include "main.h"

void unionf(int arrA[], int arrB[], int aSize, int bSize){

  int i, j, count, isThere, cSize;
  int *arrC = (int*)malloc(aSize*sizeof(int));
  cSize = aSize;
  count = cSize;

  for(i = 0; i < aSize; i++){
    *(arrC + i) = arrA[i];
  }

  for(i = 0; i < bSize; i++){
    isThere = 0;
    for(j = 0; j < aSize; j++){
      if(arrB[i]==arrA[j]){
        isThere = 1;
        break;
      }
    }
    if(!isThere){
      arrC = (int*)realloc(arrC,(cSize+1)*sizeof(int));
      cSize++;
      *(arrC+count) = arrB[i];
      count++;
    }
  }

  printArrf(arrC, cSize);

  return;
}

#include "main.h"

int main(){

  int arrA[] = {1,5};
  int arrB[] = {1,2,3,4,5};
  int aSize = sizeof(arrA)/sizeof(arrA[0]);
  int bSize = sizeof(arrB)/sizeof(arrB[0]);

  printf("Set A:\n");
  printArrf(arrA, aSize);
  printf("Set B:\n");
  printArrf(arrB, bSize);
  printf("Difference: \n");
  diffef(arrA, arrB, aSize, bSize);
  printf("Union: \n");
  unionf(arrA, arrB, aSize, bSize);
  printf("Intersection: \n");
  interf(arrA, arrB, aSize, bSize);

  return 0;
}

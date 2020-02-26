#include "main.h"

int printNodes(node_x * head){
  node_x * current = head;
  int count = 0;

  while(current != NULL){
    printf("%d\n", current->value);
    current = current->next;
    count++;
  }

  return count;
}

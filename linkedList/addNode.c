#include "main.h"

//learn-c.org/en/Linked_lists
int addNode(node_x * head, int value){

  node_x * current = head;

  while(current->next != NULL){
    current = current->next;
  }

  current->next = (node_x*)malloc(sizeof(node_x));
  current->next->value = value;
  current->next->next = NULL;

  return 0;
}

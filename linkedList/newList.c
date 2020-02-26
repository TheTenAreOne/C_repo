#include "main.h"

node_x* newList(int value){

  node_x* head = (node_x*)malloc(sizeof(node_x));
  if(head == NULL){
    return NULL;
  }
  head->value = value;
  head->next = NULL;

  return head;
}

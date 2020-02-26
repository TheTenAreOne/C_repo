#include "main.h"

int getNode(node_x * head,int pos){
  int i;
  node_x * current = head;
  for(i = 0; i < pos; i++){
    current = current->next;
    if(current==NULL){
      return 0;
    }
  }

  return current->value;
}

#include "main.h"

int main(){
  int value,i;
  node_x * head;

  printf("Enter value for first node:");
  scanf("%d", &value);
  head = newList(value);

  for(i = 0; i < 10; i++){
    addNode(head, i+value);
  }

  addNode(head, 88);

  printf("{\n");
  printf("Number of nodes: %d\n", printNodes(head));
  printf("}");
  return 0;
}

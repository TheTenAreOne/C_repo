#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int value;
  struct node * next;
} node_x;

int addNode(node_x*,int);
node_x* newList(int);
int getNode(node_x*,int);
int printNodes(node_x*);

#include "link_list.h"

int main() {
  // Create Pointer to Node
  Node* head  = NULL;
  Node* one   = NULL;
  Node* two   = NULL;
  Node* three = NULL;

  // Allocate memory on the heap; meaning the nodes
  // are scatters throughout memory
  head  = (Node*)malloc(sizeof(Node));
  one   = (Node*)malloc(sizeof(Node));
  two   = (Node*)malloc(sizeof(Node));
  three = (Node*)malloc(sizeof(Node));

  // Save the addr of the first not in head
  head = one;

  // Assign data
  one->data   = 1;
  two->data   = 2;
  three->data = 3;

  // Connecting the nodes; NULL indicate the end of the list
  one->next   = two;
  two->next   = three;
  three->next = NULL;

  push(head, 10);

  print_list(head);
  return 0;
}
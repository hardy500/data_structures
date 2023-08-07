#include "link_list.h"

int get_count(Node* head) {
  int count = 0;
  Node* current = head;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}

void print_list(Node* head) {
  Node* current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  puts("");
}

void append(Node* head, int data) {
  // Create new node
  Node* new_node = NULL;
  new_node       = (Node*)malloc(sizeof(Node));
  new_node->data = data;

  Node* current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next       = new_node;
  current->next->next = NULL;
}

int pop_last(Node* head) {
  int retval = -1;
  if (head->next == NULL) {
    retval = head->data;
    free(head);
    return retval;
  }

  Node* current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }

  retval = current->next->data;
  free(current->next);
  current->next = NULL;
  return retval;
}

int pop_first(Node** head) {
  int retval = -1;
  Node* next_node = NULL;

  if (*head == NULL) return -1;

  next_node = (*head)->next;
  retval    = (*head)->data;
  free(*head);

  *head = next_node;
  return retval;
}

void insert_front(Node** head, int data) {
  Node* new_node = NULL;
  new_node       = (Node*)malloc(sizeof(Node));
  new_node->data = data;

  new_node->next = *head;
  *head          = new_node;
}

int remove_by_index(Node** head, int n) {
  int retval = -1;
  Node* current = *head;
  Node* tmp = NULL;

  if (n >= get_count(*head)) {
    printf("Index out of bound\n");
    return -1;
  }

  if (n == 0) return pop_first(head);

  for (int i = 0; i < n-1; i++) {
    if (current->next == NULL) return -1;
    current = current->next;
  }

  if (current->next == NULL) return -1;

  tmp    = current->next;
  retval = tmp->data;
  current->next = tmp->next;
  free(tmp);

  return retval;
}

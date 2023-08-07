#pragma once

#include "common.h"

typedef struct Node Node;

struct Node{
  int data;
  Node* next;
};

int get_count(Node* head);
void print_list(Node* head);
void append(Node* head, int data);
int pop_last(Node* head);
int pop_first(Node** head);
void insert_front(Node** head, int data);
int remove_by_index(Node** head, int n);

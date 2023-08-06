#pragma once

#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;

struct Node{
  int data;
  Node* next;
};

int get_count(Node* head);
void print_list(Node* head);
void push(Node* head, int data);
int pop_last(Node* head);
int pop_first(Node** head);
void insert_front(Node** head, int data);
int remove_by_index(Node** head, int n);

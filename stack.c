#include "stack.h"

void create(Stack* s) {
  s->top   = -1;
  s->count = -1;
}

int is_full(Stack* s) {
  if (s->top == MAX - 1) return 1;
  else return 0;
}

int is_empty(Stack* s) {
  if (s->top == -1) return 1;
  else return 0;
}

void push(Stack* s, int new_item) {
  if (is_full(s)) {
    printf("Stack is full\n");
  } else {
    s->top++;
    s->count++;
    s->item[s->top] = new_item;
  }
}

void pop(Stack* s) {
  if (is_empty(s)) {
    printf("Stack is empty\n");
  } else {
    printf("popped: %d\n", s->item[s->top]);
    s->top--;
    s->count--;
  }
}

void print_stack(Stack* s) {
  for (int i = s->count; i > 0 ; i--) {
    printf("%d", s->item[i]);
    printf("\n");
  }
}
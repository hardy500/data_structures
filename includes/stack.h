#include "common.h"

#define MAX 100

typedef struct {
  int item[MAX];
  int top;
  int count;
} Stack;

void create(Stack* s);
int is_full(Stack* s);
int is_empty(Stack* s);
void push(Stack* s, int new_item);
void pop(Stack* s);

void print_stack(Stack* s);
#pragma once
#include "common.h"

#define SIZE 10

typedef struct {
  int items[SIZE];
  int front;
  int rear;
} Queue;

int en_cqueue(Queue* q, int value);
int de_cqueue(Queue* q);

int is_cfull(Queue* q);
int is_cempty(Queue* q);
void cdisplay(Queue* q);

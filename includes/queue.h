#pragma once
#include "common.h"

#define SIZE 10

typedef struct {
  int items[SIZE];
  int front;
  int rear;
} Queue;

void en_queue(Queue* q, int value);
void de_queue(Queue* q);
void display(Queue* q);
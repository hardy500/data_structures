#include "queue.h"

void en_queue(Queue* q, int value) {
  if (q->rear == SIZE-1) {
    printf("Queue is full\n");
  } else {
    if (q->front == -1) q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
    printf("inserted: %d\n", value);
  }
}

void de_queue(Queue* q) {
  if (q->front == -1) {
    printf("Queue is empty\n");
  } else {
    printf("delete: %d\n", q->items[q->front]);
    q->front++;
    if (q->front > q->rear)
      q->front = q->rear = -1;
  }
}

void display(Queue* q) {
  if (q->rear == -1) {
    printf("Queue is empty\n");
  } else {
    for (int i = q->front; i <= q->rear; i++)
      printf("%d ", q->items[i]);
  }
  puts("");
}
#include "circular_queue.h"

int is_cfull(Queue* q) {
  if ((q->front == q->rear + 1)
      || (q->front == 0 && q->rear == SIZE - 1))
    return 1;
}

int is_cempty(Queue* q) {
  if (q->front == -1) return 1;
}

int en_cqueue(Queue* q, int value) {
  if (is_cfull(q)) {
    printf("Queue is full\n");
  } else {
    if (q->front == -1) q->front = 0;
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
    printf("inserted: %d\n", value);
  }
}

int de_cqueue(Queue* q) {
  int e;
  if (is_cempty(q)) {
    printf("Queue is empty\n");
    return -1;
  } else {
    e = q->items[q->front];
    if (q->front == q->rear) {
      q->front = q->rear = -1;
    } else {
      q->front = (q->front + 1) % SIZE;
    }
    printf("delete: %d\n", e);
    return e;
  }
}

void cdisplay(Queue* q) {
  int i;
  if (is_cempty(q)) {
    printf("Empty Queue\n");
  } else {
    printf("Front: %d\n", q->front);
    printf("Items: %d");
    for (i = q->front; i != q->rear; i = (i + 1) % SIZE) {
      printf("%d\n", q->items[i]);
    }
    printf("%d ", q->items[i]);
    printf("Rear %d\n", q->rear);
  }
}

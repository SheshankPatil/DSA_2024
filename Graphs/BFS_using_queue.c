#include <stdio.h>
#include <stdlib.h>

struct queue {
  int fr;
  int r;
  int size;
  int *arr;
};

int isfull(struct queue *p) {
  if (p->r == p->size - 1) {
    return 1;
  } else {
    return 0;
  }
}

int isempty(struct queue *p) {
  if (p->r == p->fr) {
    return 1;
  } else {
    return 0;
  }
}

void enqueue(struct queue *q, int data) {
  if (isfull(q)) {
    printf("queue full");
  } else {
    q->r = q->r + 1;
    q->arr[q->r] = data;
  }
}

int dequeu(struct queue *q) {
  int a;
  if (isempty(q)) {
    printf("queue is empty");
  } else {
    q->fr = q->fr + 1;
    a = q->arr[q->fr];
    return a;
  }
}

void queuetraverseral(struct queue *q) {
  if (isempty(q)) {
    printf("empty");
  } else {
    for (int i = q->fr; i < q->size; i++) {
      printf("%d\n", q->arr[q->fr]);
      q->fr = q->fr + 1;
      /* code here */
    }
  }
}

int main() {
  struct queue *q = (struct queue *)malloc(sizeof(struct queue));
  q->arr = (int *)malloc(q->size * sizeof(int));
  q->fr = -1;
  q->size = 400;
  q->r = -1;

  int u;
  int i = 0;
  int visited[7] = {0, 0, 0, 0, 0, 0, 0};
  int a[7][7] = {{0, 1, 1, 1, 0, 0, 0}, {1, 0, 1, 0, 0, 0, 0},
                 {1, 0, 0, 1, 1, 0, 0}, {1, 1, 1, 0, 1, 0, 0},
                 {0, 0, 1, 1, 0, 1, 1}, {0, 0, 0, 0, 1, 0, 0},
                 {0, 0, 0, 0, 1, 0, 0}};
  printf("%d\n", i);
  visited[i] = 1;
  enqueue(q, i);
  while (!isempty(q)) {
    int node = dequeu(q);
    for (int j = 0; j < 7; j++) {
      if (a[u][i] == 1 && visited[j] == 0) {
        printf("%d", j);
        visited[j] = 1;
        enqueue(q, j);
      }
      /* code here */
    }
  }

  return 0;
}
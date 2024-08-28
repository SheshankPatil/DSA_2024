#include <stdio.h>
#include <stdlib.h>

struct queue {
    int f;
    int r;
    int size;
    int *arr;
};


int isfull(struct queue* ptr) {
    if (ptr->r == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isempty(struct queue* ptr) {
    if (ptr->f == ptr->r) {
        return 1;
    } else {
        return 0;
    }
}

void enqueueF(struct queue* ptr, int val) {
    if (ptr->f == 0) {
        printf("Cannot enqueue from front, already at beginning\n");
        return;
    }
    if (isfull(ptr)) {
        printf("Queue is full\n");
    } else {
        ptr->f = ptr->f - 1;
        ptr->arr[ptr->f] = val;
    }
}

void queuetraversal(struct queue* ptr) {
    if (isempty(ptr)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = ptr->f; i <= ptr->r; i++) {
        printf("%d\n", ptr->arr[i]);
    }
}



void enqueueR(struct queue* ptr, int val) {
    if (isfull(ptr)) {
        printf("The queue is full\n");
    } else {
        ptr->r = ptr->r + 1;
        ptr->arr[ptr->r] = val;
    }
}

int dequeueR(struct queue* ptr) {
    int a;
    if (isempty(ptr)) {
        printf("The queue is empty\n");
        return -1;
    } else {
        a = ptr->arr[ptr->r];
        ptr->r = ptr->r - 1;
        return a;
    }
}

int dequeueF(struct queue* ptr) {
    int a;
    if (isempty(ptr)) {
        printf("Queue is empty\n");
        return -1;
    } else {
        a = ptr->arr[ptr->f];
        ptr->f = ptr->f + 1;
        return a;
    }
}

int main() {
    struct queue* q;
    q = (struct queue*)malloc(sizeof(struct queue));
    q->f = 0;
    q->r = -1;
    q->size = 10;
    q->arr = (int*)malloc(q->size * sizeof(int));
    printf("Queue is created successfully\n");

    enqueueR(q, 10);
    enqueueR(q, 20);
    enqueueR(q, 30);
    dequeueF(q);
    enqueueF(q, 99);
    enqueueR(q, 40);
    


    queuetraversal(q);

    printf("Dequeued from front: %d\n", dequeueF(q));
    printf("Dequeued from rear: %d\n", dequeueR(q));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *createnode(int data) {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = data;
  p->left = NULL;
  p->right = NULL;
}

int isbst(struct node *ptr) {
  static struct node *prev = NULL;
  if (ptr != NULL) {
    if (!isbst(ptr->left)) {
      return 0;
    }
    if (prev != NULL && ptr->data < prev->data) {
      return 0;
    }
    prev = ptr;
    return isbst(ptr->right);
  } else {
    return 1;
  }
}

struct node *searchkey(struct node *ptr, int key) {
  if (ptr == NULL) {
    return NULL;
  }
  if (ptr->data == key) {
    return ptr;
  } else if (ptr->data > key) {
    searchkey(ptr->left, key);
  } else {
    searchkey(ptr->right, key);
  }
}

int main() {

  struct node *p1;
  struct node *p2;
  struct node *p3;
  struct node *p4;
  struct node *p5;
  struct node *p6;

  p1 = createnode(60);
  p2 = createnode(10);
  p3 = createnode(70);
  p4 = createnode(5);
  p5 = createnode(20);
  p6 = createnode(71);

  p1->left = p2;
  p1->right = p3;
  p2->left = p4;
  p2->right = p5;
  p3->right = p6;

  struct node *n;
  n = searchkey(p1, 71);
  printf("%d", n->data);

  return 0;
}
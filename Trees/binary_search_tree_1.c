#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *createnode(int data) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->left = NULL;
  p->right = NULL;
  p->data = data;
}

int isbst(struct node *ptr) {
  static struct node *prev = NULL;
  if (ptr != NULL) {
    if (!isbst(ptr->left)) {
      return 0;
    }

    if (prev != NULL && ptr->data <= prev->data) {
      return 0;
    }
    prev = ptr;
    return isbst(ptr->right);
  } else {
    return 1;
  }
}

void traverseral(struct node *p) {
  if (p != NULL) {
    traverseral(p->left);
    printf("%d\n", p->data);
    traverseral(p->right);
  }
}

int main() {

  struct node *p1;
  struct node *p2;
  struct node *p3;
  struct node *p4;
  struct node *p5;
  struct node *p6;
  struct node *p7;

  p1 = createnode(4);
  p2 = createnode(2);
  p3 = createnode(6);
  p4 = createnode(1);
  p5 = createnode(3);
  p6 = createnode(5);
  p7 = createnode(7);

  p1->right = p3;
  p1->left = p2;
  p2->right = p5;
  p2->left = p4;
  p3->right = p7;
  p3->left = p6;

  traverseral(p1);
  printf("%d", isbst(p1));

  return 0;
}
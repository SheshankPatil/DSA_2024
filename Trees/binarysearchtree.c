#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *createnode(int data) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->data = data;
  p->left = NULL;
  p->right = NULL;
}

void inordertraversal(struct node *ptr) {
  if (ptr != NULL) {
    inordertraversal(ptr->left);
    printf("%d\n", ptr->data);
    inordertraversal(ptr->right);
  }
}

int isbst(struct node *root) {
  static struct node *prev = NULL;
  if (root != NULL) {
    if (!isbst(root->left)) {
      return 0;
    }
    if (prev != NULL && root->data <= prev->data) {
      return 0;
    }
    prev = root;
    return isbst(root->right);
  } else {
    return 1;
  }
}

int main() {
  struct node *p = createnode(20);
  struct node *p1 = createnode(10);
  struct node *p2 = createnode(25);
  struct node *p3 = createnode(8);
  struct node *p4 = createnode(11);
  struct node *p5 = createnode(23);
  struct node *p6 = createnode(30);
  p->left = p1;
  p->right = p2;
  p1->left = p3;
  p1->right = p4;
  p2->left = p5;
  p2->right = p6;
  inordertraversal(p);
  printf("%d", isbst(p));

  return 0;
}
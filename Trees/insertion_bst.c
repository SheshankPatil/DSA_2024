#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void insert(struct node *p, int data) {
  struct node *prev = NULL;
  while (p != NULL) {
    prev = p;
    if (p->data == data) {
      printf("cannot insert already in bst");
      return;
    } else if (data < p->data) {
      p = p->left;
    } else {
      p = p->right;
    }
  }
  struct node *new = createnode(data);
  if (data < prev->data) {
    prev->left = new;
  } else {
    prev->right = new;
  }
}

void new_insert(int data, struct node *root) {
  struct node *prev;
  while (root != NULL) {
    prev = root;
    if (root->data == data) {
      printf("number already exists");
      return;
    } else if (data < root->data) {
      root = root->left;
    } else {
      root = root->right;
    }
  }
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data = data;
  if (data < prev->data) {
    prev->left = new;
  } else {
    prev->right = new;
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

  insert(p1, 69);
  printf("%d", p1->right->left->data);
  new_insert(65, p1);
  printf("%d", p1->right->left->left->data);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left;
  struct node *right;
  int height;
};

int getheight(struct node *n) {
  if (n == NULL) {
    return 0;
  }
  return n->height;
}

struct node *createnode(int key) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->key = key;
  node->right = NULL;
  node->left = NULL;
  node->height = 1;
  return node;
}

int getbalance(struct node *node) {
  if (node == NULL) {
    return 0;
  }
  return getheight(node->left) - getheight(node->right);
}

int max(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

struct node *leftrotate(struct node *node) {
  struct node *y = node->right;
  struct node *t2 = y->left;

  y->left = node;
  node->right = t2;

  node->height = max(getheight(node->right), getheight(node->left)) + 1;
  y->height = max(getheight(y->right), getheight(y->left)) + 1;
  return y;
}

struct node *rightrotate(struct node *node) {
  struct node *x = node->left;
  struct node *t2 = x->right;

  x->right = node;
  node->left = t2;

  node->height = max(getheight(node->right), getheight(node->left)) + 1;
  x->height = max(getheight(x->right), getheight(x->left)) + 1;

  return x;
}

struct node *insert(struct node *node, int key) {
  if (node == NULL) {
    return createnode(key);
  }
  if (key < node->key) {
    node->left = insert(node->left, key);
  } else if (key > node->key) {
    node->right = insert(node->right, key);
  }

  node->height = max(getheight(node->right), getheight(node->left)) + 1;
  int bf = getbalance(node);

  // left left case
  if (bf > 1 && key < node->left->key) {
    return rightrotate(node);
  }
  // right right case
  if (bf < -1 && key > node->right->key) {
    return leftrotate(node);
  }

  // leftright case
  if (bf > 1 && key < node->left->key) {
    node->left = leftrotate(node);
    return rightrotate(node);
  }
  // right left roatate
  if (bf < -1 && key < node->right->key) {
    node->right = rightrotate(node);
    return leftrotate(node);
  }

  return node;
}

void inorder(struct node *n) {
  if (n != NULL) {
    inorder(n->left);
    printf("%d\n", n->key);
    inorder(n->right);
  }
}

int main() {
  struct node *root = NULL;

  root = insert(root, 1);
  root = insert(root, 2);
  root = insert(root, 3);
  root = insert(root, 4);
  root = insert(root, 5);
  root = insert(root, 6);
  root = insert(root, 7);
  inorder(root);
}

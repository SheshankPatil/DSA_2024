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
  return p;
}

void inorder(struct node *p) {
  if (p != NULL) {
    inorder(p->left);
    printf("%d\n", p->data);
    inorder(p->right);
  }
}

struct node *prein(struct node *root) {
  root = root->left;
  while (root->right != NULL) {
    root = root->right;
  }
  return root;
}

struct node *deletenode(struct node *root, int value) {

  struct node *ipre;
  if (root == NULL) {
    return NULL;
  }
  if (root->left == NULL && root->right == NULL) {
    free(root);
    return NULL;
  }
  if (value < root->data) {
    root->left = deletenode(root->left, value);
  } else if (value > root->data) {
    root->right = deletenode(root->right, value);
  } else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    ipre = prein(root);
    root->data = ipre->data;
    root->left = deletenode(root->left, ipre->data);
  }
  return root;
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

  inorder(p1);
  printf("Deleting 20...\n");
  deletenode(p1, 20);
  inorder(p1);

  return 0;
}

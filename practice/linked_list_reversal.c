#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *createnode(int data) {
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->data = data;
  p->next = NULL;
}

void traversal(struct node *p) {
  while (p != NULL) {
    printf("%d\n", p->data);
    p = p->next;
  }
}

struct node *revrse(struct node *head) {
  struct node *back;
  struct node *curr;
  struct node *front;
  back = NULL;
  curr = head;

  while (curr != NULL) {
    front = curr->next;
    curr->next = back;
    back = curr;
    curr = front;
  }
  return back;
}

int main() {

  struct node *one = createnode(1);
  struct node *two = createnode(2);
  struct node *three = createnode(3);
  struct node *four = createnode(4);
  struct node *five = createnode(5);

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;

  traversal(one);
  one = revrse(one);
  printf("\n");
  traversal(one);

  return 0;
}
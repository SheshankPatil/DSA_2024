
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

void nodetraversal(struct node *p) {
  struct node *x = p;
  do {
    printf("%d\n", p->data);
    p = p->next;
  } while (x != p);
}

int chechk(struct node *head) {
  struct node *temp = head;

  if (!head)
    return 0;
  while (!head && head->next != temp) {
    head = head->next;
  }
  if (!head || !(head->next)) {
    return 0;
  }
  return 1;
}

int main() {
  struct node *head = createnode(10);
  struct node *one = createnode(20);
  struct node *two = createnode(30);
  struct node *three = createnode(40);
  struct node *four = createnode(50);
  head->next = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = head;

  nodetraversal(head);
  printf("%d", chechk(head));

  return 0;
}
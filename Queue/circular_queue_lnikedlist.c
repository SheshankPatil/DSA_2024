#include <stdio.h>
#include <stdlib.h>


struct node *f = NULL;
struct node *r = NULL;

struct node{
  int data;
  struct node *next;
};

void linkedlisttraversal(struct node*ptr)
{
    printf("printing the elements\n");
    while (ptr!=NULL) 
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void enqueue(struct node *f, struct node *r, int val) 
{
    struct node *n; 
    n=(struct node *)malloc(sizeof(struct node));
    if (n==NULL) 
    {
        printf("the queue is full");
    }
    else {
        n->data=val;
        n->next=NULL;
        if (f==NULL) 
        {
            f=r=n;
        }
        else {
            r->next=n;
            r=n;
        }
    }
}



int main() {
  linkedlisttraversal(f);
  enqueue(f,r,10);
  enqueue(f,r,20);
  linkedlisttraversal(f);
}
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

void enqueue(int val) 
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

int dequqe(struct node*f)
{
    int a;
    if(f==NULL)
    {
        printf("the queue is empty");
    }
    else 
    {
    a=f->data;
    f=f->next;
    }
    return a;
}


int main() {
  linkedlisttraversal(f);
  enqueue(10);
  enqueue(20);
  enqueue(30);
  linkedlisttraversal(f);
  printf("dequeued elemnts\n");
  printf("%d\n",dequqe(f));
}
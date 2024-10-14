
#include <stdlib.h>
#include <stdio.h>


struct node
{
    int data;
    struct node*next;
};



void traversal(struct node*head)
{
    struct node*p=head;
    while (p!=NULL) 
    {
        printf("%d\n",p->data);
        p=p->next;
    
    }
    // return head;
}


int main()
{
    struct node*base;
    struct node*second;
    struct node*third;
    struct node*fourth;
    base=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    base->data=10;
    base->next=second;

    second->data=22;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    traversal(base);


    return 0;
}
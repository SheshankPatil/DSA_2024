#include <stdio.h>
#include <stdlib.h>



struct node
{   
    int data;
    struct node*next;
};


//circular linked list trvaersal
void circulartraversal(struct node*head)
{
    struct node*p=head;

    do {
    printf("%d\n",p->data);
    p=p->next;
    }while (p!=head);

}
//insertion in head

struct node*insertfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;

    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}


int main()
{

    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=head;


    circulartraversal(head);

    printf("\n");

    head=insertfirst(head, 69);

    circulartraversal(head);

    return 0;

}
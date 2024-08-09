#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    
};


void traversal(struct node* head)
{
    struct node*p=head

    while (p!=head) {
    
    
    printf("%d\n",p->data);
    p=p->next;
    }

    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=22;
    head->next=second;

    second->data=21;
    second->next=third;

    third->data=23;
    third->next=fourth;

    fourth->data=33;
    fourth->next=NULL;



    traversal(head);



    return 0;

}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    
};


void traversal(struct node* ptr)
{
    while (ptr!=NULL) {
    
    
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}


struct node*deletionatbegin(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
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
    printf("\n");



    head=deletionatbegin(head);

    
    traversal(head);


    return 0;

}

#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node*next;
};

void printlist(struct node *ptr)
{
    while (ptr!=NULL) 
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    
    }
    printf("\n");
}


struct node* reverselist(struct node*ptr)
{
    struct node*prev=NULL;
    struct node*curr=ptr;
    struct node*next;
    while (curr!=NULL) 
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    
    }
    return prev;
}


int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*fourth=(struct node*)malloc(sizeof(struct node));
    struct node*fifth=(struct node*)malloc(sizeof(struct node));


    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=NULL;


    printlist(head);
    head=reverselist(head);
    printlist(head);

}
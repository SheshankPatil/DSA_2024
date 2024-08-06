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

//deleteing the head
struct node*deletionatbegin(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;

}

//deleting at an index 
struct node*deleteatindex(struct node*head,int index)
{
    struct node*p=head;
    struct node*q=head->next;
    for (int i=0; i<index-1;i++) 
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

//deleting the last node

struct node*deletionatlast(struct node*head)
{
    struct node*p;
    struct node*q;
    p=head;
    q=head->next;
    while (q->next!=NULL) 
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}


//delete for the given element
struct node*deleteforthedata(struct node*head,int data)
{
    struct node*p=head;
    struct node*q=head->next;
    while (q->data!=data && q->next!=NULL) 
    {
        p=p->next;
        q=q->next;
    }
    if (q->data==data) 
    {
        p->next=q->next;
        free(q);
    }
    else 
    {
        printf("the value was not found in the list");
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
    printf("\n");



    head=deleteforthedata(head, 21);

    //head=deletionatlast(head);

   //head=deleteatindex(head,2);

    //head=deletionatbegin(head);


    traversal(head);


    return 0;

}
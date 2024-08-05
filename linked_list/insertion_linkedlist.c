#include <stdio.h>
#include <stdlib.h>

//data node
struct node{
    int data;
    struct node*next;
};


//traversal of the list
void traversal(struct node*ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    
    }

}

//insert a element in the beginnig and it will return the head to the new ptr in main
struct node* insertatfirst(struct node *head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
 
//takes index and head to trverserve using p pointer and will add the new ptr from the middle reassigning things
struct node* insertatindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while (i<index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


//inset at the end will take head and travesr till it finds null and then insert before it
struct node*insertatend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    ptr->data=data;

    while (p->next!=NULL)
    {
        p=p->next;

    
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//INSERT AFTER A NODE WILL HAVE THE INDEX POINTER PRESENT AND WILL DIRECTLY INSERT AFTER A NODE WITHOUT TRAVERSAL
struct node*insertafternode(struct node*head,struct node*previousnode,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    ptr->next=previousnode->next;
    previousnode->next=ptr;

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

    second->data=11;
    second->next=third;

    third->data=12;
    third->next=fourth;

    fourth->data=13;
    fourth->next=NULL;

    traversal(head);
    printf("\n");
    
    insertafternode(head,second,99);

    //insertatend(head,96);
    
    //insertatindex(head,69,1);

    //head=insertatfirst(head,  22);
    traversal(head);

    return 0;
}
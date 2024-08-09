#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*next;
};


void circulartevaersal(struct node*head)
{

    struct node*ptr=head;
   do{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
   }while(ptr!=head);
 
}

struct node*inseratfirst(struct node*head,int data)
{

    struct node*ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;

    struct node*p=head->next;
     while(p->next!=head)
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


    circulartevaersal(head);
    printf("\n");
    head=inseratfirst(head,69);
    circulartevaersal(head);
    return 0;

}
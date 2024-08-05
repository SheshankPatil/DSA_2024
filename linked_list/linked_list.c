#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

};


void traversal(struct node *ptr)
{
    while (ptr!=NULL) 
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}




int main()
{
    struct node* head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=fourth;

    fourth->data=22;
    fourth->next=third;

    third->data=10;
    third->next=NULL;


    traversal(head);

    return 0;

}
#include<stdio.h>
#include<stdlib.h>



struct node{
    
    int data;
    struct node*prev;
    struct node*next;
};


void traverssal(struct node*n1,struct node*n4)
{
    struct node*ptr=n1;
    struct node*ctr=n4;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ctr!=NULL)
    {
        printf("%d\n",ctr->data);
        ctr=ctr->prev;
    }
}

// void prevtraverssal(struct node*n1)
// {
//     struct node*ptr=n4;
//     while(ptr!=NULL)
//     {
//         printf("%d\n",ptr->data);
//         ptr=ptr->prev;
//     }
// }


int main()
{   

    struct node*n1;
    struct node*n2;
    struct node*n3;
    struct node*n4;

    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    n4=(struct node*)malloc(sizeof(struct node));


    n1->data=10;
    n1->next=n2;
    n1->prev=NULL;

    n2->data=20;
    n2->next=n3;
    n2->prev=n1;

    n3->data=30;
    n3->next=n4;
    n3->prev=n2;

    n4->data=40;
    n4->next=NULL;
    n4->prev=n3;

   traverssal(n1,n4);
//    prevtraverssal(n1,n4);

    return 0;
}
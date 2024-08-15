#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;

};


struct node*top=NULL;
int isempty(struct node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int isfull(struct node*top)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    if (p==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}


 
struct node*push(struct node*top,int x)
{
    if(isfull(top))
    {
        printf("stack is overflown");
    }
    else {
        struct node*n=(struct node*)malloc(sizeof(struct node));
        n->data=x;       
        n->next=top; 
        top=n;
        return top;
    }
}

int pop(struct node**top)
{
    if(isempty(*top))
    {
        printf("stack underflow");
    }
    else {
        struct node*n=*top;
        *top=(*top)->next;
        int x= n->data;
        free(n);
        return x;
    }
}




void traversal(struct node*top)
{
    while (top!=NULL)
    {
        printf("%d\n",top->data);
        top=top->next;
    
    }
}






int main()
{
    struct node*top=NULL;
    top=push(top,10);
    top=push(top, 100);
    top=push(top, 45);
    traversal(top);
    int element=pop(&top);
    printf("pooped:%d\n",element);
    traversal(top);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void push(struct stack*ptr,int value)
{
    if(isfull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("no elemnts(stack underflow)");
    }
    else
    {
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;

    }

}


int main()
{

    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("stack has been created sucessfully\n");

    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));

    push(sp,20);
    push(sp,10);
    push(sp, 30);

    printf("%d\n",pop(sp)); 
    printf("%d\n",pop(sp)); 
    
    printf("%d\n",isempty(sp));
    printf("%d\n",isfull(sp));



    return 0;
}
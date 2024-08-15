#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};


int peek(struct stack*ptr,int i)
{
    int arryindex=ptr->top-i+1;
    if (arryindex<0)
    {
        printf("not a valid postion");
        return -1;
    }
    else 
    {
        return ptr->arr[arryindex];
    }

}

int isempty(struct stack*ptr)
{
    return ptr->top==-1;
}

int isfull(struct stack*ptr)
{
    return ptr->top==ptr->size-1;;
}



void push(struct stack*ptr,int value)
{

    if (isfull(ptr)) 
    {
        printf("stack overflow\n"); 
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int pop(struct stack*ptr)
{
    if (isempty(ptr)) 
    {
        printf("stack underflow\n");
        return -1;
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
    struct stack*s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    printf("stack has been created sucessfully\n");



    push(s, 20);
    push(s,30);
    push(s, 20);
    push(s,30);
    push(s, 20);
    push(s,30);
    push(s, 20);
    push(s,30);
    push(s, 69);

    pop(s);

    for (int j=1; j<=s->top+1;j++) 
    {
        printf("the value of the postion %d is %d\n",j,peek(s,j));
    }


    return 0;
}
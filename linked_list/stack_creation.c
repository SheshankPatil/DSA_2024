#include<stdio.h>
#include<stdlib.h>


struct stack{

    int size;
    int top;
    int *arr; 
};

int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack * ptr)
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






int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    // s->arr[0]=20;
    // s->top++;




    if(isempty(s))
    {
        printf("the stack is empty");
    }
    else
    {
        printf("the stack is full");
    }

    return 0;

}
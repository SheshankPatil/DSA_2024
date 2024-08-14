#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
     
};

int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}


int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack*ptr,char x)
{
    if(isfull(ptr))
    {
        printf("stack cant be pushed");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=x;
    }
}

char pop(struct stack*ptr)
{
    if(isempty(ptr))
    {
        printf("stack is empty");
        return -1;
    }
    else {
         char x=ptr->arr[ptr->top];
         ptr->top--;
         return x;
    }
}



int match(char a,char b)
{
    if(a=='(' && b==')')
    {
        return 1;
    }
    else {
        return 0;
    }
    if (a=='[' && b==']')
    {
        return 1;
    }
    else {
        return 0;
    }
    if (a=='{' && b=='}') 
    {
        return 1;
    }
    else {
        return 0;
    }
}

char stacktop(struct stack*sp)
{
    return sp->arr[sp->top];
}


int parathesismatch(char*exp)
{
    struct stack*pp=(struct stack*)malloc(sizeof(struct stack));
    pp->size=100;
    pp->top=-1;
    pp->arr=(char*)malloc(pp->size*sizeof(char));

    for (int i = 0;exp[i]!='\0'; i++) {
        if (exp[i]=='(' || exp[i]=='{' || exp[i]== '[') 
        {
            push(pp, exp[i]);
        }
        else if (exp[i]==')'||exp[i]=='}'||exp[i]==']') 
        {
            if(isempty(pp))
            {
                return 0;
            }
            else {
                char popped_ch = pop(pp);
                if(match(popped_ch,exp[i]))
                {
                    return 0;
                }
            }
        }
    }
    if (isempty(pp)) 
    {
        return 1; 
    }
    else {
        return 0;
    }
}






int main()
{

    char*exp="[8*24+3729*2212+33+42+1](44+1)";
    if (parathesismatch(exp)) 
    {
        printf("the paranthsesis are matching");
    }
    else {
        printf("the paranthsesis are not matching");
    }



    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct mynewarray
{

    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct mynewarray *a, int ttsize,int uusize)
{
    a->total_size=ttsize;
    a->used_size=uusize;
    a->ptr=(int *)malloc(ttsize*sizeof(int));
    
}

void showv(struct mynewarray *a)
{
    for (int i=0; i<a->used_size;i++) 
    {
        printf("you value %d is %d\n",i,(a->ptr[i]));
    }
}

void setval(struct mynewarray *a)
{
    int n;
    for(int i=0;i<a->used_size;i++)
    {
        printf("enter your value %d: ",i);
        scanf("%d",&n);
        (a->ptr[i])=n;
    }
}

int main()
{

    struct mynewarray array;
    createarray(&array, 20, 5);
    setval(&array);
    showv(&array);

return 0;
}
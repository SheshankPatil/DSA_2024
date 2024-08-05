#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void creatarray(struct myarray *a,int tsize,int usize)
{
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void show(struct myarray *a)
{
    for (int i=0; i<a->used_size;i++) 
    {
        printf("%d\n",(a->ptr)[i]);
    
    }

}

void setval(struct myarray *a)
{
    int n;
    for (int x=0; x< a->used_size;x++)
    {
        
        printf("enter element%d : ",x);
        scanf("%d",&n);
        (a->ptr[x])=n;
    
    }
}

int main()
{
    struct myarray danger;
    creatarray(&danger,10, 5);
    printf("we are runnig setval now\n");
    setval(&danger);
    printf("we are running showval now\n");
    show(&danger);


    return 0;
}
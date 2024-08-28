
#include <stdio.h>
#include <stdlib.h>


struct cqueue 
{
    int f;
    int r;
    int size;
    int *arr;

};


int isfull(struct cqueue *q)
{
    if(((q->r+1)%q->size)==q->f)
    {
        return 1;
    }
    else {
        return 0;
    }
}


int isempty(struct cqueue*q)
{
    if (q->f==q->r) 
    {
        return 1;
    }
    else {
        return 0;
    }
}



void enqueue(struct cqueue*q,int value)
{
    if (isfull(q)) 
    {
        printf("queue is full");
    }
    else {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=value;
    }
}


int dequeue(struct cqueue *q)
{
    int a;
    if(isempty(q))
    {
        printf("no element to return\n");
        
    }
    else {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
        return a;
    }
}



int main()
{
    struct cqueue *q;
    q=(struct cqueue*)malloc(sizeof(struct cqueue));
    q->size=10;
    q->f=0;
    q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
    printf("queue created sucesfully\n");
    enqueue(q, 22);
    enqueue(q, 23);
    enqueue(q, 24);
    enqueue(q, 25);
    enqueue(q,50); 

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    int v=dequeue(q);
    
    printf("%d\n",v);

    return 0;
}
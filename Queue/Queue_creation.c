#include <stdio.h>
#include <stdlib.h>


struct queue 
{
    int f;
    int r;
    int size;
    int *arr;

};


int isfull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}


int isempty(struct queue*q)
{
    if (q->f==q->r) 
    {
        return 1;
    }
    else {
        return 0;
    }
}



void enqueue(struct queue*q,int value)
{
    if (isfull(q)) 
    {
        printf("queue is full");
    }
    else {
        q->r=q->r+1;
        q->arr[q->r]=value;
    }
}


int dequeue(struct queue *q)
{
    int a;
    if(isempty(q))
    {
        printf("no element to return\n");
        
    }
    else {
        q->f=q->f+1;
        a=q->arr[q->f];
        return a;
    }
}



int main()
{
    struct queue *q;
    q=(struct queue*)malloc(sizeof(struct queue));
    q->size=10;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    printf("queue created sucesfully\n");
    enqueue(q, 22);
    enqueue(q, 23);
    enqueue(q, 24);
    enqueue(q, 25);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    int v=dequeue(q);
    
    printf("%d\n",v);

    return 0;
}
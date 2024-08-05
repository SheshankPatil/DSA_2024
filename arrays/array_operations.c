#include <stdio.h>
#include <stdlib.h>


void show(int arr[], int size)
{

    for (int i=0; i<size;i++)
    {
        printf("%d\t",arr[i]);
    
    }

}

int insert(int arr[],int size,int element,int capacity,int index)
{

    if (index>=size)
    {
        printf("insertion failed\n");
    }
    for (int i=size-1; i>=index; i--) 
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size+=1;

}

int main()
{
    int size=5,element=70,capacity=10,index=6;
    int arr[10]={10,20,22,34,55};
    insert(arr,size,element,capacity,index);
    //size+=1;
    show(arr,size);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>



void deletion(int arr[],int size,int index)
{

    for (int i=index; i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}


void display(int arr[],int size)
{   

    for (int i=0; i<=size; i++)
    {   
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[10]={10,11,22,34,55};
    int size=5,index=011,element=45;
    deletion(arr,size,index);
    size-=2;
    display(arr,size);
    return 0;
} 
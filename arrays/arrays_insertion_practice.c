#include <stdio.h>
#include <stdlib.h>


void display(int arr[],int size)
{
    for (int i=0; i<=size; i++)
    {
        printf("%d\t",arr[i]);
    }

}

int insert(int arr[],int size,int element,int capacity,int index)
{
    if (index>size)
    {
        return -1;
    }
    for (int i=size-1; i>=index;i--)
    {
        arr[i+1]=arr[i];    
    }
    arr[index]=element;
    size+=1;
}

int main()
{
    int arr[10]={10,11,22,33,5,6};
    //display(arr,6);
    int size=6,element=99,capacity=10,index=2;
    insert(arr,size,element,capacity,index);
    display(arr, size);


}
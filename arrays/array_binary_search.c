#include <stdio.h>
#include <stdlib.h>


int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while (low<=high) 
    {
    mid=(low+high)/2;
    if (arr[mid]==element)
    {
        return mid;
    }
    if(arr[mid]<element)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    return -1;
}

int main()
{
    int arr[10]={1,3,4,6,7,8,9,66};
    int indevval=binarysearch(arr,10,3);
    printf("%d",indevval);


}
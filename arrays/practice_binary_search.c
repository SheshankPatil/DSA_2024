#include <stdio.h>


int binary_search(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while (low<=mid)
    {
        mid=(low+high)/2;
        if (arr[mid]==element) 
        {
            return mid;
        
        }

        if (arr[mid]<element)
        {
            low=mid+1;
        
        }
        else 
        {
            high=mid-1;
        }
    
    }

}


int main()
{
    int arr[10]={1,3,4,6,7,8,9};
    int search=binary_search(arr,6,6);
    printf("%d",search);

}
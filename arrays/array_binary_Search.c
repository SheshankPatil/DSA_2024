#include <stdio.h>
#include <stdlib.h>

int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<=size;i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        

    }
    return -1;
}


int main()
{

    int arr[10]={1,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int indexval=linearsearch(arr,size,1);
    printf("%d",indexval);
    return 0;
}
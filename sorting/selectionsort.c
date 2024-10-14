#include <stdio.h>
#include <stdlib.h>



void printarray(int* a,int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",a[i]);

    }
    printf("\n");
} 


void selectionsort(int*a,int n)
{
    for (int i = 0; i < n-1; i++) 
    {
        int minindex=i;
        for (int j = i+1; j <n ; j++) 
        {
            if (a[j]<a[minindex]) 
            {
                minindex=j;
            }
            int temp=a[i];
            a[i]=a[minindex];
            a[minindex]=temp;
            
        }

    }
}







int main()
{
    int a[]={1,3,88,2,9,7};
    int n=(sizeof(a)/4);
    printarray(a, n);
    selectionsort(a,n);
    printarray(a,n);

    // int abs(-10);
    printf("%d",abs(-10));
}
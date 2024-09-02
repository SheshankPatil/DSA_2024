#include <stdio.h>
// #include <stdlib.h>

void printarray(int *A,int a)
{
    for (int i=0;i<=a-1;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}


void bubbsort_adaptive(int*A,int a)
{
    int temp;
    int issorted=0;
    for (int i=0;i<=a-1; i++) 
    {
        printf("running number of pass %d\n",i+1);
        issorted=1;
        for (int j = 0; j<a-1 ; j++) 
        {
            if (A[j]>A[j+1]) 
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            
        }
        if (issorted) 
        {
            return;
        }
    
    }

}


int main()
{
    // int A[]={1,34,6,8,9,5,3,2};
    int A[]={1,2,3,4};
    int a=(sizeof(A))/4;
    printarray(A,a);
    bubbsort_adaptive(A,a);
    printarray(A,a);

}
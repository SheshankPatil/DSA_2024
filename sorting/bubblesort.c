#include <stdio.h>
// #include <stdlib.h>


void prinarray(int*A,int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}




void bubblesortadaptive(int *A,int a)
{
    int temp;
    int issorted=0;
    for (int i = 0; i < a-1; i++) 
    {
        printf("now runnning pass num %d\n",i+1);
        issorted=1;
        for (int j = 0; j < a-1-i; j++) 
        {
            if(A[j]>A[j+1])
            {
                issorted=0;
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        if(issorted)
        {
            return;
        }
    }
}



int main()
{
    // int A[]={1,45,7,8,6,4,2,8};
    int A[]={1,4,3,5,6,7};
    int n=6;
    prinarray(A,n);
    bubblesortadaptive(A,n);
    printf("\n");
    prinarray(A,n);


    return 0;
}
#include <stdio.h>

void printarray(int*a,int n)
{
    for (int i = 0; i <n; i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}



void insertiontionsort(int*a,int n)
{
    int key,j;
    for (int i = 0; i < n; i++) 
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key) 
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}







int main()
{
    int A[]={1,5,7,9,45,32};
    int n=(sizeof(A)/4);
    printarray(A,n);
    insertiontionsort(A,n);
    printarray(A,n);


    return 0;
}

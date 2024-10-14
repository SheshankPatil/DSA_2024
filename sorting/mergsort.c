#include <stdio.h>

void printarray(int*a,int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


void merge(int*a,int mid,int low,int high)
{
    int i,j,k;
    int b[100];
    i=low;
    j=mid+1;
    k=low;
    
    while (i<=mid && j<=high) 
    {
        if (a[i]<a[j]) 
        {
            b[k]=a[i];
            i++,k++;
        }
        else {
            b[k]=a[j];
            k++,j++;
        }
    }

    while (i<=mid) 
    {
        b[k]=a[i];
        k++,i++;
    }
    while (j<=high) 
    {
        b[k]=a[j];
        k++,j++;
    }
    for (int i = low; i <=high; i++) 
    {
        a[i]=b[i];
        /* code here */ 
    }
}


void mergesort(int*a,int low,int high)
{
    if(low<high)
    {
        int mid;
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a, mid+1,high);
        merge(a,mid,low,high);
    }
}


int main()
{
    int a[]={2,4,54,6,7,345,6,4,9};
    int n=(sizeof(a)/sizeof(int));
    printarray(a,n);
    mergesort(a,0,n);
    printarray(a,n+1);


    return 0;
}
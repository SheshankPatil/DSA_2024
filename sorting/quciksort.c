#include <stdio.h>




void prinarray(int *a,int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int partion(int *a, int low, int high)
{
    int pivot = a[low]; // Pivot is the first element
    int i = low + 1;    // Start from the element after the pivot
    int j = high;       // Start from the last element

    // Perform partitioning
    do {
        // Move 'i' right until an element greater than pivot is found
        while (a[i] <= pivot && i <= high) {
            i++;
        }
        // Move 'j' left until an element smaller than pivot is found
        while (a[j] >= pivot && j > low) {
            j--;
        }
        // Swap the found elements if 'i' is still less than 'j'
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);  // Repeat until 'i' crosses 'j'

    // Swap the pivot element with 'a[j]' to place the pivot in the correct position
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    // Return the index of the pivot
    return j;
}




void quicksort(int *a,int low,int high)

{
    int partitionindex;//index of piviot after partition
    if(low<high)
    {
        partitionindex=partion(a,low,high);
        quicksort(a,low,partitionindex-1);
        quicksort(a, partitionindex+1, high);
    }

}


int main()
{
    int a[]={1,43,56,76,2,32,5,1};
    int n=(sizeof(a)/sizeof(int));

    prinarray(a,n); 
    quicksort(a,0,n-1);
    prinarray(a,n);



    return 0;
}
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void printarray(int*a,int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int maxium(int*a,int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countsort(int*a,int n)
{
    int i, j;
    int max = maxium(a,n);

    int *count = (int *)malloc((max+1) * sizeof(int));

    // Initialize the count array to zero
    for (i = 0; i <= max; i++) 
    {
        count[i] = 0;
    }

    // Count occurrences of each number
    for (i = 0; i < n; i++) 
    {
        count[a[i]] = count[a[i]] + 1; 
    }

    i = 0;
    j = 0;

    // Reconstruct the sorted array
    while (i <= max) 
    {
        if(count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else 
        {
            i++;
        }
    }

    // Free dynamically allocated memory
    free(count);
}

int main()
{
    int a[] = {4, 5, 66, 8, 9, 4, 2, 5};
    int n = (sizeof(a) / sizeof(int));

    printf("Original array:\n");
    printarray(a, n);

    countsort(a, n);

    printf("Sorted array:\n");
    printarray(a, n);

    return 0;
}

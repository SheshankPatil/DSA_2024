#include <stdio.h>
#include <stdlib.h>

#define NUM_INPUTS 10000

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
        // printf("now runnning pass num %d\n",i+1);
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
	int arr[NUM_INPUTS];
	FILE *file;

	file = fopen("inputs.txt", "r");
	if (file == NULL)
	{
		perror("Error opening file");
		return -1;
	}

	for (int i = 0; i < NUM_INPUTS; i++)
	{
		if (fscanf(file, "%d", &arr[i]) != 1)
		{
			perror("Error reading from file");
			fclose(file);
			return -1;
		}
	}
	fclose(file);
	// for (int i = 0; i < NUM_INPUTS; i++)
	{
		// printf("%d\n", arr[i]);
	}

    bubblesortadaptive(arr, NUM_INPUTS);
    // prinarray(arr, NUM_INPUTS);
    

	return 0;


}
#include <stdio.h>




int ratconsume(int r,int unit,int*arr,int n)
{
    int needfood=r*unit;
    int gotfood=0;
    int count=0;
    for (int i = 0; i < n; i++) 
    {
        gotfood=gotfood+arr[i];
        count++;
        if (gotfood>=needfood) 
        {
            break;

        }

    }
    return count;
}



int main()
{
    int r=7;
    int unit=2;
    int n=8;
    int arr[]={2 ,8 ,3 ,5 ,7 ,4 ,1 ,2};
    printf("%d",ratconsume(r, unit,arr,n));
}
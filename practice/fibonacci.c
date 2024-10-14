#include <stdio.h>


void fibbonaci(int n)
{
    int t1=0,t2=1;
    int nextfib;
    printf("%d ,%d",t1,t2);

    while (t1+t2<n) 
    {
        nextfib=t1+t2;
        printf(", %d",nextfib);
        t1=t2;
        t2=nextfib;
    
    }
}




int main()
{
    fibbonaci(15);
    int i=127%10;
    printf("  %d",i);



}
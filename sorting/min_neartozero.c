#include <stdio.h>
#include <stdlib.h>

int neartozeo(int n, int*a)
{
    int min=a[0];

    for (int i = 0; i <n; i++) 
    {

        if(abs(min)>abs(a[i]))
        {
            min=a[i];

        }
        if(abs(min)==abs(a[i]))
        {
            if(min<a[i])
            {
                min=a[i];
            }
        }

    }
    return min;
}



int main()
{
    int a[]={-5 ,-4 ,-2 ,12 ,-40 ,4 ,2 ,18 ,11 ,5};
    int n=(sizeof(a)/sizeof(int));
    printf("%d",neartozeo(n,a));
    char ch;
    char s;
    char sen;
    
    for (int i = 0; i < 4; i++) 
    {
        scanf(const char *restrict, ...)
    }
    printf("%c\n",ch);
    printf("%c\n",s);
    printf("%c\n",sen);

    return 0;
}
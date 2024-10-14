#include <stdio.h>

int x=3;

void multipy(int x)
{
    for (int i = 0; i <=10*x; i+=3) 
    {
        // int y=i*x;
        printf("%d\n",i);
    }

}



int main()
{
    multipy(3);
    
}
#include <stdio.h>




int main()
{

    int a;
    scanf("%d",&a);

    // for (int i = 0; i <a; ++i) 
    // {
    //     for (int i = 0; i < a; i++) {
    //         /* code here */ 
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i <a ; i++) 
    {
        for (int z = 0; z <i ; z++) 
        {
            printf(" ");
        }
        for (int c = 0; c <2*i+1 ; c++) {
            /* code here */ 
            printf("*");
        }

          for (int z = 0; z <i ; z++) 
        {
            printf(" ");
        }
        
        printf("\n");


        for (int i = 0; i < a-1; i++) 
        {
        printf(" ");
            /* code here */ 
        }


        for (int j =0; j<2*a-(2*i+1); j++) 
        {
            printf("*");
        }
        
        for (int i = 0; i < a-1; i++) 
        {
            printf(" ");
            /* code here */ 
        }
    }

}
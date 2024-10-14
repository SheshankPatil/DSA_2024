#include <stdio.h>
#include <string.h>





int main()
{

    char str[]="hellllllloo";
    int n=strlen(str);
    char a;
    scanf("%c",&a);

    int cout=0;
    int i=0;

    while (str[i]!='\0') 
    {
        if (str[i]==a) 
        {
            cout=cout+1; 
        }
        i++;
    
    }

    float percrnt;
    percrnt=((float)cout/n)*100;
    printf("%.2f",percrnt);

    return 0;

}
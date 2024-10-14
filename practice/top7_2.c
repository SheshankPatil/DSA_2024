#include <stdio.h>
#include <string.h>



int chechkpalindrome(char*str)
{
    int f=0;
    int b=strlen(str)-1;

    while (f<=b) 
    {
        if(str[f++]!=str[b--])
        {
            return 0;
        }
    }
    return 1;

}



int main()
{
    char str[]="heeh";
    // int n=strlen(str);
    int x=chechkpalindrome(str);
    printf("%d",x);


    return 0;
}
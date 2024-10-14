#include <stdio.h>
#include <string.h>



int chechkpass(char*strn,int n)
{
    if (n<4) 
    {
        return 0;
    }
    if (strn[0]-'0'>=0&&strn[0]-'0'<=9) 
    {
        return 0;   
    }

    int num=0,cap=0;
    for (int i = 0; i < n; i++) 
    {
        if (strn[i]-'0'>=0&&strn[i]-'0'<=9) 
        {
            num++;
        }
        else if (strn[i]>='A'&& strn[i]<='Z') 
        {
            cap++;
        }
        else if (strn[i]==' ' ||strn[i]=='/') 
        {
            return 0;
        }
    }
    return num>0 && cap>0;
}



int main()
{
  char str[100];
  fgets (str, sizeof (str), stdin);
  int len = strlen (str);
  if (str[len - 1] == '\n')
    {
      str[len - 1] = '\0';	// Remove the newline character
      len--;			// Decrement the length
    }
  int result = chechkpass (str, len);
  printf ("%d\n", result);
  return 0;

}
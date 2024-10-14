#include <stdio.h>
#include <string.h>

void reverserastring(char *str1, int len) {
  int j = 0;
  char str2[100];
  for (int i = len - 1; i >= 0; i--) {
    str2[j] = str1[i];
    j++;
    str2[j] = '\0';
  }

  strcpy(str1, str2);
}

int main() {
  char str1[100] = {"my name is sheshank"};
  int len = strlen(str1);
  reverserastring(str1, len);
  printf("%s\n", str1);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringreverse(char *s, int len) {
  char str2[50];
  int j = 0;
  for (int i = len - 1; i >= 0; i--) {
    str2[j] = s[i];
    j++;
  }
  strcpy(s, str2);
}

int main() {
  char s[50] = "jai shri ram";
  int len = strnlen(s, 50);
  //   printf("%d", len);
  stringreverse(s, len);
  printf("%s", s);

  return 0;
}
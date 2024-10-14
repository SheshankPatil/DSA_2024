#include <stdio.h>
#include <string.h>

void reverse(char *abc) {
  int first = 0;
  int last = (strlen(abc) - 1);
  int temp;

  while (first < last) {
    temp = abc[first];
    abc[first] = abc[last];
    abc[last] = temp;

    first++;
    last--;
  }
}

int main() {
  char abc[50] = "my name is sheshank";
  printf("%s", abc);
  reverse(abc);
  printf("\n");
  printf("%s", abc);
  return 0;
}
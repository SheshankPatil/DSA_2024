#include <stdio.h>
#include <string.h>

void removespace(char *str) {
  int j = 0;
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] != ' ') {
      str[j++] = str[i];
    }
  }
  str[j] = '\0';
}

void stringreverese(char *str) {
  int j = 0;
  char temp;
  int front = 0;
  int len = strlen(str);
  int back = (len - 1);
  while (front < back) {
    temp = str[front];
    str[front] = str[back];
    str[back] = temp;
    front++;
    back--;
  }
}

int comparepali(char *str) {
  if (strchr(str, ' ') != NULL) {
    return 1;
  }
  char temp[50];
  removespace(str);
  strcpy(temp, str);
  int len = strlen(str);
  int a = (len - 1);
  int b = 0;
  while (b < a) {
    if (str[b] != temp[a]) {
      return 0;

    } else {
      return 1;
    }
  }
}

int main() {
  char str[50] = " ";
  // removespace(str);
  // printf("%s", str);
  // stringreverese(str);
  // printf("%s", str);
  // int a = comparepali(str);
  str[strcspn(str, "\n")] = 0;
  printf("%s", str);
  return 0;
}
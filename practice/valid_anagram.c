#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringsort(char *str) {
  int n = strlen(str);
  char temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (str[i] > str[j]) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}

bool isAnagram(char *s, char *t) {
  stringsort(s);
  stringsort(t);
  if (strcmp(s, t) == 0) {
    return true;
  } else {
    return false;
  }
}

// using hashing function creating an arrya to strore the values and dleete
bool hasisAnagram(char *s, char *t) {
  // If the lengths are different, they can't be anagrams
  if (strlen(s) != strlen(t)) {
    return false;
  }

  // Create an array to count the frequency of characters (assuming ASCII 256
  // chars)
  int count[256] = {0};

  // Traverse both strings and update the frequency count
  for (int i = 0; s[i] != '\0'; i++) {
    count[(unsigned char)s[i]]++; // Increment for string s
    count[(unsigned char)t[i]]--; // Decrement for string t
  }

  // Check if all counts are zero, which means both strings had the same
  // characters
  for (int i = 0; i < 256; i++) {
    if (count[i] != 0) {
      return false; // If any count is non-zero, the strings are not anagrams
    }
  }

  return true; // If all counts are zero, the strings are anagrams
}

int main() {

  char s1[50] = "anagram";
  char s2[50] = "naagram";
  int x = isAnagram(s1, s2);
  printf("%d", x);
  return 0;
}
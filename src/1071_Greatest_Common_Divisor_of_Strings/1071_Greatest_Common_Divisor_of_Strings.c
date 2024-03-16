#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2);

int main(void) {
  char str1[] = "ABABAB";
  char str2[] = "AB";
  char* result = gcdOfStrings(str1, str2);
  printf("result = %s\n", result);
  return 0;
}

char* gcdOfStrings(char* str1, char* str2) {
  if (strlen(str2) > strlen(str1)) {
    return gcdOfStrings(str2, str1);
  } else if (strcmp(str1, str2) == 0) {
    return str1;
  }

  size_t currOffset = 0;

  while (*str1 == str2[currOffset]) {
    str1 += 1, currOffset++;
  }

  if (currOffset == strlen(str2)) {
    return gcdOfStrings(str1, str2);
  }

  return "";
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mergeAlternately(char *word1, char *word2);

int main(void) {
  char word1[10] = "";
  char word2[10] = "";
  char *string = mergeAlternately(word1, word2);
  printf("%s\n", string);

  free(string);
  return 0;
}

char *mergeAlternately(char *word1, char *word2) {
  size_t len = strlen(word1) + strlen(word2) + 1;
  char *resultString = malloc(sizeof(char) * len);
  size_t i, j, k;

  for (i = 0, j = 0, k = 0; j < strlen(word1) && k < strlen(word2); i++) {
    if (i % 2) {
      resultString[i] = word2[k++];
    } else {
      resultString[i] = word1[j++];
    }
  }

  for (; j < strlen(word1); j++) {
    resultString[i++] = word1[j];
  }

  for (; k < strlen(word2); k++) {
    resultString[i++] = word2[k];
  }

  resultString[i] = '\0';

  return resultString;
}
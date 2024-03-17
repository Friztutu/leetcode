#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseWords(char* s);

int main(void) {
  char string1[] = "word words another word";
  char* resultString1 = reverseWords(string1);
  printf("resultString1 = %s\n", resultString1);

  char string2[] = "  word  word  another word  ";
  char* resultString2 = reverseWords(string2);
  printf("resultString2 = %s\n", resultString2);

  free(resultString1);
  free(resultString2);
  return 0;
}

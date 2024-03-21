#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSubsequence(char* s, char* t);

int main(void) {
  char* str1 = "abc";
  char* t1 = "ahbgdc";
  printf("%d\n", isSubsequence(str1, t1));

  char *str2 = "axc"; 
  char *t2 = "ahbgdc";
  printf("%d\n", isSubsequence(str2, t2));
  return 0; 
}

bool isSubsequence(char* s, char* t) {
  size_t sIndex = 0;

  for(size_t i = 0; i < strlen(t); i++) {
    if(t[i] == s[sIndex]) sIndex++;
  }

  return sIndex == strlen(s);
}
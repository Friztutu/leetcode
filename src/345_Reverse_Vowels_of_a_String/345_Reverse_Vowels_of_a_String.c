#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseVowels(char* s);

int isVowel(char letter);

int main(void) {
  char s1[] = "hello";
  reverseVowels(s1);
  printf("s1 = %s\n", s1);

  char s2[] = "lEetcOde";
  reverseVowels(s2);
  printf("s2 = %s\n", s2);

  return 0;
}

int isVowel(char letter) {
  return letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' ||
         letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' ||
         letter == 'u' || letter == 'U';
}

char* reverseVowels(char* s) {
  int left = 0, right = strlen(s) - 1;
  int lReplace = 0, rReplace = 0;

  while (left <= right) {
    lReplace = isVowel(s[left]);
    rReplace = isVowel(s[right]);

    !lReplace ? left++ : left;
    !rReplace ? right-- : right;

    if (lReplace && rReplace) {
      char temp = s[left];
      s[left] = s[right];
      s[right] = temp;
      lReplace = 0, rReplace = 0;
      left++, right--;
    }
  }
  return s;
}
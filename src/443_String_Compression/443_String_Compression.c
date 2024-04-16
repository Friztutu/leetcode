#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int compress(char* chars, int charsSize);

int fillChars(char* chars, int charsIndex, int countSimilarChar, char symbol);

void outputString(char* chars, int len);

int main(void) {
  char chars1[8] = "aabbccc";
  int result1 = compress(chars1, strlen(chars1));
  printf("result = %d\n", result1);
  outputString(chars1, result1);

  char chars2[2] = "a";
  int result2 = compress(chars2, strlen(chars2));
  printf("result = %d\n", result2);
  outputString(chars2, result2);

  char chars3[14] = "abbbbbbbbbbbb";
  int result3 = compress(chars3, strlen(chars3));
  printf("result = %d\n", result3);
  outputString(chars3, result3);

  char chars4[] = "aaaaaabbbbbbbbbbbbbbbbbbbbbcccccccccccccc";
  int result4 = compress(chars4, strlen(chars4));
  printf("result = %d\n", result4);
  outputString(chars4, result4);
  return 0;
}

int fillChars(char* chars, int charsIndex, int countSimilarChar, char symbol) {
  chars[charsIndex] = symbol;
  charsIndex++;

  if (countSimilarChar == 1) {
    return charsIndex;
  }

  int ten = 1;
  for (; ten <= countSimilarChar / 10; ten *= 10) {
  }

  for (; ten > 0; ten /= 10) {
    chars[charsIndex++] = countSimilarChar / ten + 48;
    countSimilarChar %= 10;
  }

  return charsIndex;
}

int compress(char* chars, int charsSize) {
  int countSimilarChar = 1, charsIndex = 0;
  char previousChar = chars[0];

  for (int i = 1; i < charsSize; i++) {
    if (previousChar != chars[i]) {
      charsIndex = fillChars(chars, charsIndex, countSimilarChar, previousChar);
      countSimilarChar = 1;
    } else {
      countSimilarChar++;
    }

    previousChar = chars[i];
  }

  charsIndex = fillChars(chars, charsIndex, countSimilarChar, previousChar);

  return charsIndex;
}

void outputString(char* chars, int len) {
  for (int i = 0; i < len; i++) {
    printf("%c", chars[i]);
  }
  printf("\n");
}
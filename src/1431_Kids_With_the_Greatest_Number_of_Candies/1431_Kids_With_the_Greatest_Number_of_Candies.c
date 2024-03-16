#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies,
                      int* returnSize);

int main(void) {
  int candies[] = {2, 3, 5, 1, 3};
  int extraCandies = 3;
  int returnSize;
  bool* result = kidsWithCandies(candies, 5, extraCandies, &returnSize);

  for (int i = 0; i < returnSize; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");

  free(result);
  return 0;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies,
                      int* returnSize) {
  bool* resultArray = malloc(sizeof(bool) * candiesSize);

  int candiesMax = candies[0];

  for (int i = 0; i < candiesSize; i++) {
    if (candies[i] > candiesMax) {
      candiesMax = candies[i];
    }
  }

  for (int i = 0; i < candiesSize; i++) {
    resultArray[i] = candies[i] + extraCandies >= candiesMax ? true : false;
  }

  *returnSize = candiesSize;
  return resultArray;
}
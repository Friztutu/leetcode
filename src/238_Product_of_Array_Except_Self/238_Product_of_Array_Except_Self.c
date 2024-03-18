#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize);

int main(void) {
  int array1[] = {1, 2, 3, 4};
  int resultSize1;
  int* result1 = productExceptSelf(array1, 4, &resultSize1);
  for (int i = 0; i < resultSize1; i++) {
    printf("%d ", result1[i]);
  }
  printf("\n");

  int array2[] = {-1, 1, 0, -3, 3};
  int resultSize2;
  int* result2 = productExceptSelf(array2, 5, &resultSize2);
  for (int i = 0; i < resultSize2; i++) {
    printf("%d ", result2[i]);
  }
  printf("\n");

  free(result1);
  free(result2);
  return 0;
}

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
  int* resultArray = malloc(sizeof(int) * numsSize);
  *returnSize = numsSize;

  resultArray[numsSize - 1] = 1;

  for (int i = numsSize - 2; i > -1; i--) {
    resultArray[i] = nums[i + 1] * resultArray[i + 1];
  }

  int product = 1;

  for (int i = 0; i < numsSize; i++) {
    resultArray[i] = resultArray[i] * product;
    product *= nums[i];
  }

  return resultArray;
}

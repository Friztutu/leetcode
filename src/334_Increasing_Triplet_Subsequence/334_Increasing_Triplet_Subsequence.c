#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

bool increasingTriplet(int* nums, int numsSize);

int main(void) {
  int nums1[] = {1, 2, 3, 4, 5};
  printf("result1 = %d\n", increasingTriplet(nums1, 5));

  int nums2[] = {5, 4, 3, 2, 1};
  printf("result2 = %d\n", increasingTriplet(nums2, 5));

  int nums3[] = {2, 1, 5, 0, 4, 6};
  printf("result3 = %d\n", increasingTriplet(nums3, 6));

  int nums4[] = {20, 100, 10, 12, 5, 13};
  printf("result4 = %d\n", increasingTriplet(nums4, 6));

  int nums5[] = {1, 5, 0, 4, 1, 3};
  printf("result5 = %d\n", increasingTriplet(nums5, 6));

  return 0;
}

bool increasingTriplet(int* nums, int numsSize) {
  int min = INT32_MAX, mid = INT32_MAX;

  for (int i = 0; i < numsSize; i++) {
    if (min >= nums[i]) {
      min = nums[i];
    } else if (mid >= nums[i]) {
      mid = nums[i];
    } else {
      return true;
    }
  }

  return false;
}

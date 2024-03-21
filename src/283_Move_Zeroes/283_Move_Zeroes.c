#include <stdio.h>

void moveZeroes(int* nums, int numsSize);

int main(void) {
  int nums1[] = {0, 1, 0, 3, 12};
  moveZeroes(nums1, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d ", nums1[i]);
  }
  printf("\n");

  int nums2[] = {0};
  moveZeroes(nums2, 1);
  printf("%d\n", nums2[0]);

  int nums3[] = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
  moveZeroes(nums3, 10);
  for (int i = 0; i < 10; i++) {
    printf("%d ", nums3[i]);
  }
  printf("\n");
  return 0;
}

void moveZeroes(int* nums, int numsSize) {
  int left = 0, right = 1;

  while (left < numsSize && right < numsSize) {
    if (!nums[left] && !nums[right]) {
      right++;
      continue;
    }

    if (!nums[left]) {
      int temp = nums[left];
      nums[left] = nums[right];
      nums[right] = temp;
    }

    left++, right++;
  }
}
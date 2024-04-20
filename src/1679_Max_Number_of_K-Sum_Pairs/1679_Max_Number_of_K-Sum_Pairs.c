#include <stdio.h>

int maxOperations(int* nums, int numsSize, int k);

int main(void) {
  int nums1[] = {1, 2, 3, 4};
  int k1 = 5;
  printf("result1 = %d\n",
         maxOperations(nums1, sizeof(nums1) / sizeof(int), k1));

  int nums2[] = {3, 1, 3, 4, 3};
  int k2 = 6;
  printf("result2 = %d\n",
         maxOperations(nums2, sizeof(nums2) / sizeof(int), k2));
  return 0;
}

int maxOperations(int* nums, int numsSize, int k) {
  
}
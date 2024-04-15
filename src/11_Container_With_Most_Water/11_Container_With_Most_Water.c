#include <stdio.h>

int maxArea(int* height, int heightSize);

int main(void) {
  int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  printf("%d\n", maxArea(height, 9));
  return 0;
}

int maxArea(int* height, int heightSize) {
  int left = 0, previousLeft = 0;
  int right = heightSize - 1, previousRight = heightSize - 1;

  
}
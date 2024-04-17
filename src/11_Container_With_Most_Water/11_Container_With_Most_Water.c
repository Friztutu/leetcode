#include <stdio.h>

int maxArea(int* height, int heightSize);

int main(void) {
  int height1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  printf("%d\n", maxArea(height1, 9));

  int height2[] = {1, 1};
  printf("%d\n", maxArea(height2, 2));
  return 0;
}

int maxArea(int* height, int heightSize) {
  int left = 0, right = heightSize - 1;
  int bottonSide = right - left;
  int side = height[left] > height[right] ? height[right] : height[left];
  int result = bottonSide * side;

  while (left < right) {
    bottonSide = right - left;
    side = height[left] > height[right] ? height[right] : height[left];
    int square = side * bottonSide;

    if (result < square) {
      result = square;
    }

    if (height[left] > height[right]) {
      right--;
    } else {
      left++;
    }
  }

  return result;
}
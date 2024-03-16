#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n);

int main(void) {
  int flowerbed1[] = {1, 0, 0, 0, 1};
  int n1 = 1;
  bool result1 = canPlaceFlowers(flowerbed1, 5, n1);
  printf("result1 = %d\n", result1);

  int flowerbed2[] = {1, 0, 0, 0, 1};
  int n2 = 2;
  bool result2 = canPlaceFlowers(flowerbed2, 5, n2);
  printf("result2 = %d\n", result2);

  int flowerbed3[] = {1, 0, 0, 0, 0, 1};
  int n3 = 2;
  bool result3 = canPlaceFlowers(flowerbed3, 6, n3);
  printf("result3 = %d\n", result3);
  return 0;
}

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
  int previousValue, nextValue;
  bool result = false, isLastPlanted = false;

  for (int i = 0; i < flowerbedSize && n != 0; i++) {
    previousValue = i != 0 ? flowerbed[i - 1] : 0;
    nextValue = i != flowerbedSize - 1 ? flowerbed[i + 1] : 0;

    if (isLastPlanted) {
      previousValue = 1;
    }

    if (!(flowerbed[i] || previousValue || nextValue)) {
      n--;
      isLastPlanted = true;
    } else {
      isLastPlanted = false;
    }
  }

  if (n == 0) result = true;

  return result;
}
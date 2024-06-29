#include <stdio.h>
#ifdef RUN_MAIN
int bSearch(int arr[], int len, int target) {
  int first = 0;
  int last = len - 1;
  while (first <= last) {
    int mid = (first + last) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      first = mid + 1;
    } else {
      last = mid - 1;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9};

  int result = bSearch(arr, sizeof(arr) / sizeof(int), 5);
  if (result == -1) {
    printf("Binary Search 실패");
  } else
    printf("Binary Search 성공!\nIndex: %d", result);
  return 0;
}
#endif
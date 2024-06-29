#include <stdio.h>
#ifdef RUN_MAIN
int lSearch(int arr[], int len, int target) {
  for (int i = 0; i < len; i++) {
    if (target == arr[i]) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9};

  int result = lSearch(arr, sizeof(arr) / sizeof(int), 5);
  if (result == -1) {
    printf("Linear Search 실패");
  } else
    printf("Linear Search 성공!\nIndex: %d", result);
  return 0;
}
#endif

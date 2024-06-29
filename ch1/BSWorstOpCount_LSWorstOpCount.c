#include <stdio.h>
#ifdef RUN_MAIN
int bsWorstOpCount(int arr[], int len, int target) {
  int first = 0;
  int last = len - 1;
  int opCount = 0;
  while (first <= last) {
    int mid = (first + last) / 2;
    if (arr[mid] == target) {
      return opCount;
    } else if (arr[mid] < target) {
      first = mid + 1;
    } else {
      last = mid - 1;
    }
    opCount += 1; // ==을 기준으로 세면 됨.
  }
  return opCount;
}

int lsWorstOpCount(int arr[], int len, int target) {
  int opCount = 0;
  for (int i = 0; i < len; i++) {
    if (target == arr[i]) {
      return opCount;
    }
    opCount += 1;
  }
  return opCount;
}

void main(void) {
  int arr1[500] = {
      0,
  };
  int arr2[5000] = {
      0,
  };
  int arr3[50000] = {
      0,
  };

  int BSopCount1 = bsWorstOpCount(arr1, sizeof(arr1) / sizeof(int), 5);
  int BSopCount2 = bsWorstOpCount(arr2, sizeof(arr2) / sizeof(int), 5);
  int BSopCount3 = bsWorstOpCount(arr3, sizeof(arr3) / sizeof(int), 5);
  int LSopCount1 = lsWorstOpCount(arr1, sizeof(arr1) / sizeof(int), 5);
  int LSopCount2 = lsWorstOpCount(arr2, sizeof(arr2) / sizeof(int), 5);
  int LSopCount3 = lsWorstOpCount(arr3, sizeof(arr3) / sizeof(int), 5);

  printf("500 length의 Worst Binary Search 연산 횟수: %d", BSopCount1);
  printf("\n5000 length의 Worst Binary Search 연산 횟수: %d", BSopCount2);
  printf("\n50000 length의 Worst Binary Search 연산 횟수: %d", BSopCount3);
  printf("\n");
  printf("\n500 length의 Worst Linear Search 연산 횟수: %d", LSopCount1);
  printf("\n5000 length의 Worst Linear Search 연산 횟수: %d", LSopCount2);
  printf("\n50000 length의 Worst Linear Search 연산 횟수: %d", LSopCount3);
}

#endif
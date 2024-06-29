#include <stdio.h>
#ifdef RUN_MAIN
int BSearchRecur(int arr[], int first, int last, int target){
  if (first>last) {
    return -1;
  }
  
  int mid = (first+last)/2;
  if (arr[mid]== target){
    return mid;
  } else if (arr[mid]< target){
    return BSearchRecur(arr, mid+1, last, target);
  } else {
    return BSearchRecur(arr, first, mid-1, target);
  }
}

void main(){
  int arr[] = {1,3,5,7,9};
  int result = BSearchRecur(arr, 0,sizeof(arr)/sizeof(int)-1, 1);

  if (result==-1){
    printf("Recursive Binary Search 실패");
  } else {
    printf("Recursive Binary Search 성공");
    printf("\nIndex: %d", result);
  }
}
#endif
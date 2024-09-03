#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData; // 리스트에 int형 데이터의 저장을 위한 선언

typedef struct __ArrayList
{
  LData arr[LIST_LEN]; // 리스트의 저장소인 배열
  int numOfData;       // 저장된 데이터의 수
  int curPosition;     // 데이터의 참조위치를 기록
} ArrayList;

typedef ArrayList List; // List는 배열 기반 리스트

void ListInit(List *plist);            // 초기화
void LInsert(List *plist, LData data); // 데이터 저장

int LFirst(List *plist, LData *pdata); // 첫 데이터 참조
int LNext(List *plist, LData *pdata);  // 두 번재 이후 데이터 참조

LData LRemove(List *plist); // 참조한 데이터 삭제
int LCount(List *plist);    // 저장된 데이터의 수 반환

#endif
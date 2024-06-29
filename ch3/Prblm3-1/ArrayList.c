#include <stdio.h>
#include "ArrayList.h"

/**
 * 초기화할 리스트의 주소값을 인자로 전달한다.
 * 리스트 생성 후 제일 먼저 호출되어야 하는 함수이다.
 */
void ListInit(List *plist)
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}

/**
 * 리스트에 데이터를 저장한다. 매개변수 data에 전달된 값을 저장한다.
 */
void LInsert(List *plist, LData data)
{
    if (plist->numOfData >= LIST_LEN)
    {
        puts("저장이 불가능합니다.");
        return;
    }
    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;
}
/**
 * 첫번째 데이터가 pdata가 가리키는 메모리에 저장된다.
 * 데이터 참조를 위한 초기화가 진행된다.
 * 참조 성공시 TRUE(1), 실패 시 FALSE(0)을 반환
 */
int LFirst(List *plist, LData *pdata)
{
    if (plist->numOfData == 0)
    {
        return FALSE;
    }
    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}
/**
 * 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장된다.
 * 순차적인 참조를 위해서 반복 호출이 가능하다.
 * 참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다.
 * 참조 성공시 TRUE(1), 실패 시 FALSE(0)을 반환
 */
int LNext(List *plist, LData *pdata)
{
    if (plist->curPosition >= plist->numOfData - 1)
    {
        return FALSE;
    }
    plist->curPosition++;
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}
/**
 * LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다.
 * 삭제된 데이터는 반환된다.
 * 마지막 반환 데이터를 삭제하므로 연이은 반복 호출을 허용하지 않는다.
 */
LData LRemove(List *plist)
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    LData rdata = plist->arr[rpos];

    for (int i = rpos; i < num - 1; i++)
    {
        plist->arr[i] = plist->arr[i + 1];
    }
    (plist->numOfData)--;
    (plist->curPosition)--;

    return rdata;
}
/**
 * 리스트에 저장되어 있는 데이터의 수를 반환한다.
 */
int LCount(List *plist)
{
    return plist->numOfData;
}
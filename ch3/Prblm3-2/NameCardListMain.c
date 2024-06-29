#include "ArrayList.h"
#include "NameCard.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    NameCard *pcard;
    List list;
    char *compname = "Bob";
    char *newphonenum = "55555";

    ListInit(&list);

    // 총 3명의 전화번호 정보를 앞서 우리가 구현한 리스트에 저장한다. //
    pcard = MakeNameCard("Annie", "11111");
    LInsert(&list, pcard);
    pcard = MakeNameCard("Bob", "22222");
    LInsert(&list, pcard);
    pcard = MakeNameCard("Crong", "33333");
    LInsert(&list, pcard);

    // 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보를 출력한다. //
    if (LFirst(&list, &pcard))
    {
        if (NameCompare(pcard, compname) == 0)
        {
            ShowNameCardInfo(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if (NameCompare(pcard, compname) == 0)
                {
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }
    printf("\n");

    // 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 전화번호 정보를 변경한다. //
    if (LFirst(&list, &pcard))
    {
        if (NameCompare(pcard, compname) == 0)
        {
            ChangePhoneNum(pcard, newphonenum);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if (NameCompare(pcard, compname) == 0)
                {
                    ChangePhoneNum(pcard, newphonenum);
                    break;
                }
            }
        }
    }
    // 확인을 위한 전체 출력
    if (LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);
        while (LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }
    printf("\n");

    // 특정 이름을 대상으로 탐색을 진행하여 그 사람의 정보를 삭제한다. //
    if (LFirst(&list, &pcard))
    {
        if (NameCompare(pcard, compname) == 0)
        {
            pcard = LRemove(&list);
            free(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if (NameCompare(pcard, compname) == 0)
                {
                    pcard = LRemove(&list); // 사실 그냥 LRemove(&list)만 해도 문제는 없음;
                    free(pcard);
                    break;
                }
            }
        }
    }
    // 끝으로 남아있는 모든 사람의 전화번호 정보를 출력한다. //
    if (LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);
        while (LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }
}

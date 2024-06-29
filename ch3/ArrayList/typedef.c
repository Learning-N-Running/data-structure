// typedef 문법 혼자 연습한 것.
#include "stdio.h"

typedef struct _wallet
{
  int coin100Num;
  int bill5000Num;
} Wallet;

struct __wallet
{
  int coin100Num;
  int bill5000Num;
};

// #ifdef RUN_MAIN
void main(void)
{

  // Wallet myWallet;
  // myWallet.coin100Num = 10;
  // myWallet.bill5000Num = 50;

  // printf("typedef로 구현한 내 지갑의 100원 개수: %d\n",myWallet.coin100Num);
  // printf("typedef로 구현한 내 지갑의 5000원 개수: %d",myWallet.bill5000Num);

  struct __wallet myWallet;
  myWallet.coin100Num = 10;
  myWallet.bill5000Num = 50;
  printf("typedef 없이 구현한 내 지갑의 100원 개수: %d\n", myWallet.coin100Num);
  printf("typedef 없이 구현한 내 지갑의 5000원 개수: %d", myWallet.bill5000Num);
}
// #endif

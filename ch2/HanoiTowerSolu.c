#include "stdio.h"

#ifdef RUN_MAIN
// from에 꽂혀있는 num개의 원반을 by를 거쳐서 to로 이동
void HanoiTowerMove(int num, char from, char by, char to){
  if (num==1){
    printf("원반 1을 %c에서 %c로 이동\n", from, to);
  } else{
    HanoiTowerMove(num-1, from, to,by);
    printf("원반 %d을 %c에서 %c로 이동\n", num,from, to);
    HanoiTowerMove(num-1, by, from,to);
  }
}

void main(void) {
  HanoiTowerMove(3, 'A','B','C');
}
#endif
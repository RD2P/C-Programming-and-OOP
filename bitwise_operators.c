#include <stdio.h>

int main(){

  int x = 6;
  int y = 12;

  printf("%d & %d = %d\n", x, y, x & y); // 4

  printf("%d | %d = %d\n", x, y, x | y); // 14

  printf("%d ^ %d = %d\n", x, y, x ^ y); // 10

  printf("~%d = %d\n", x, ~x ); // 9

  printf("%d << 2 = %d\n", x , x << 2); // 24

  printf("%d >> 2 = %d\n", x, x >> 2); // 1

  return 0;
}
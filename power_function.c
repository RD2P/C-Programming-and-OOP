#include <stdio.h>

int power();

int main(){
  for (int i = 1; i <= 10; i++){
    printf("2 ** %d = %d\n", i, power(2,i));
  }
  return 0;
}

/* y must be a positive integer*/
int power(int x, int y) {
  int p = 1;
  for (int i = 1; i <= y; i++){
    p = p * x;
  }
  return p;
}
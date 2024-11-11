#include <stdio.h>

int main(){
  int cc = 0;

  while(getchar() != EOF){
    printf("%d\n",cc);
    cc++;
  }
  printf("%d", cc);

  return 0;
}
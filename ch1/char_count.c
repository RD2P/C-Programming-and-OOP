#include <stdio.h>

int main(){
  // int cc = 0;

  // while(getchar() != EOF){
  //   printf("%d\n",cc);
  //   cc++;
  // }
  // printf("%d", cc);

  /*Count chars, words, lines*/
  int cl = 0;
  int cw = 0;
  int c = 0;
  int cc = 0;
  while((c = getchar()) != EOF){
    ++cc;
    if (c == '\n'){
      ++cl;
      ++cw;
    }
    if (c == ' ' || c == '\t' ){
      ++cw;
    }
  }
  printf("Char: %d\tWord: %d\tLine: %d\n", cc, cw, cl);
  return 0;
}
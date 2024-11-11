#include <stdio.h>
void main(){
  char name[4] = "abc";

  /* print all the integers corresponding to each char */
  // for (int i = 0; name[i] != 0; i++)
  //   printf("%d %c %d\n", i, name[i], name[i] - '0');

  // printf("%d", '9'); // 57

  /* get integer equivalent to string of ints */
  char s[] = "888";
  int i,n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
    n = 10 * n + s[i] - '0';
  }
  printf("%d", n);

}
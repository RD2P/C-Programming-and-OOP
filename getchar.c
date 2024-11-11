#include <stdio.h>

int main(){
  int a = 'f';
  putchar(a);

  char b = 'G';
  putchar(b);

  int c;
  c = getchar();

  while (c != EOF){
    putchar(c);
    c = getchar();
  }


  return 0;
}
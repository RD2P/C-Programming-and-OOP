#include <stdio.h>

int main(){
  // strings
  char name[10] = "Diablo";
  printf("%s\n", &name);

  // print char as number to get ascii code
  printf("%c %d\n", 'A', 'A');

  //print \b
  printf("Test\b\b");

  return 0;
}
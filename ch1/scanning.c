#include <stdio.h>

int main(){
  // scanf
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("%d\n", num);

  
  // notice we don't need & when scanning string 
  char name[100];
  printf("Enter your name: ");
  scanf("%100s", name); // limit: only read up to 100 characters
  printf("Hello %s\n", name);

  
  // scan a line
  char line[1000];
  printf("Enter a line:\n");
  scanf("%[^\n]1000s", line);
  printf("%s",line);

  return 0;
}
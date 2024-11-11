#include <stdio.h>
#include <string.h>

void copy();

void main(){
  char name[100];
  char copyname[100];
  strcpy(name, "Joe");

  copy(name, copyname);
  printf("%s", copyname);
}

void copy(char s1[], char s2[]){
  for (int i = 0; (s2[i] = s1[i]) != '\0'; i++); // we can do assignment inside for loop condition
}
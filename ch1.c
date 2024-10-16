#include <stdio.h>

int main() {
  
  // printf("%d\n", 1 + 1);
  // printf("x %.1f i %d\n", 3.5, 100);

  // char num = 5;
  // printf("%05d hey", num);

  // using wrong specifier, result in 0.0
  // printf("%.1f",8); 
  // binary representation of int 8 when interpreted as float is very small

  // will result in unexpected behaviour, will need one space at the end for end of string indicator
  // char name[3] = "cat";
  // printf("%s", name);

  // scanf
  /*
  int num;
  scanf("%d", &num);
  printf("%d", num);
  */
  
  /*
  // notice we don't need & when scanning string 
  char name[100];
  printf("Enter your name: ");
  scanf("%100s", name); // limit: only read up to 100 characters
  printf("Hello %s", name);
  */
  
  // scan a line
  /*
  char line[1000];
  printf("Enter a line:\n");
  scanf("%[^\n]1000s", line);
  printf("%s",line);
  */

  // reading a file
  /*
  char line[1000];
  FILE *hand; //pointer to the file object
  hand = fopen("words.txt", "r");
  while( fgets(line, 1000, hand) != NULL){
    printf("%s", line);
  }
  */

  // for loop
  // for (int i = 0; i < 5; i++){
  //   printf("%d", i);
  // }



}

/*
char surrounded by ''
char array surrounded by ""
NULL is number 0, cast to be pointer to nothing
fgets is used to read string from input stream (file or stdin)
*/
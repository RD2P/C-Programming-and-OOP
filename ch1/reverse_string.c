#include <stdio.h>

int main(){

  // reversing a string
  char word[4] = "cat";
  printf("Word: %s\n", word);

  //reverse word place

  //find the end of string char '\0'
  char i = 0;
  while(word[i] != '\0'){
    i++;
  }
  printf("String termination point: %d",i);

  // make a temp string
  char temp[i];
  for(int n = 0; n < i; n++){
    temp[n] = word[n];
  };
  printf("\nTemp string: %s",temp);

  // reassign each char in word with chars of temp backwards
  for (int n = 0; n < i; n++){
    word[n] = temp[i-n-1];
  };

  printf("\nReversed word: %s", word);


  return 0;
}
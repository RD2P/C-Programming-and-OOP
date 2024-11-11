#include <stdio.h>

int main(){
  // reading a file
  char line[1000];
  FILE *hand; //pointer to the file object
  hand = fopen("words.txt", "r");
  while( fgets(line, 1000, hand) != NULL){
    printf("%s", line);
  }
  return 0; 
}

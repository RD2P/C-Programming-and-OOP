#include <stdio.h>

int main() {
  int num = 8;
  while (1) {
    int guess;
    printf("Guess a number: ");
    scanf("%d", &guess);
    if (guess == num) {
      printf("You guessed it!");
      break;
    } else if (guess > num) {
      printf("Too high\n");
    } else {
      printf("Too low\n");
    }
  }
}
#include<stdio.h>

int main(){

  /*
  Convert Celsius to Fahrenheit from 0 to 100, in 10 degree increments 
  F = 9/5C + 32.0
  */

  float cel, fahr;
  cel = 0.0;
  while (cel <= 100){
    fahr = ((9.0/5.0)*cel) + 32.0;
    printf("%5.1f C   %6.2f F\n", cel, fahr);
    cel += 10.0;   
  } 

  return 0;
}
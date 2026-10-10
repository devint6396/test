//Documentation
/*
File: sum.c
Author: Nitin Kumar
Description: Program to find sum of digits of a 3 digit number.
*/

# include <stdio.h>

int main(){

  int num, hundreds, tens, ones, sum;

  printf("Enter a 3 digit number: ");
  scanf("%d", &num);

  hundreds = num/100;
  tens = (num/10)%10;
  ones = num%10;

  sum = hundreds + tens + ones;

  printf("Sum: %d\n", sum);

  return 0;

  
}
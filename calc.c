// Documentation
/*
File: calc.c
Author: Nitin Kumar
Description: Simple calculator in C using switch statement
*/

#include <stdio.h>

int main() {
  double a, b, result;
  char op;

  printf("Enter a number: ");
  scanf("%lf", &a);

  printf("Enter second number: ");
  scanf("%lf", &b);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  // printf("Operator: %c\n", op);

  switch (op) {
  case '+':
    result = a + b;
    printf("Result: %.2f\n", result);
    break; 

  case '-':
    result = a - b;
    printf("Result: %.2f\n", result);
    break;

  case '*':
    result = a * b;
    printf("Result: %.2f\n", result);
    break;

  case '/':
    if (b != 0) {
      result = a / b;
      printf("Result: %.2f\n", result);
    } else {
      printf("Zero Division Error");
    }
    break;

  default:
    printf("Invalid Operation");
    break;
  }
}
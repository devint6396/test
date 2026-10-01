//Calculator using swtich statement.
#include<stdio.h>

int main(){
  int a, b, result;
  char op;

  printf("Enter a number: ");
  scanf("%d", &a);

  printf("Enter second number");
  scanf("%d", &b);

  printf("Enter an operator (+, -, *, /)\n");
  scanf("%c", &op);

  printf("Operator: %c", op);
}
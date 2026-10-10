#include <stdio.h>

int main() {

  int n, rem, sum =0, rev=0;

  printf("Enter a number: ");
  scanf("%d", &n);

  while(n>0){
    rem = n%10;
    rev = rev*10+rem;
    sum = sum +rem;
    n= n/10;
    // printf("%d", rev);
  }
  printf("Reverse: %d", rev);
  printf("\n");
  printf("Sum: %d", sum);
  printf("\n");
}
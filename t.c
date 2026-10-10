#include<stdio.h>
int main(){
  int n, r, rev=0;

  printf("Enter a number");
  scanf("%d", &n);

  r = n%10;
  rev = rev*10+r;
  n = n/10;

  r= n%10;
  rev = rev*10+r;
  n= n/10;

  r= n%10;
  rev = rev*10+r;
  n= n/10;

  printf("%d", rev);
  
}
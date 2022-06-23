/* Recursively get 2^n */
#include <stdio.h>

int recursion(int n)
{
  if (n==0)
    return 1;
  else if (n>0)
    return 2*recursion(n-1);
  else
    return 0;
}

int main(void)
{
  int n;
  printf("Type n: ");
  scanf("%d", &n);

  int val = recursion(n);

  if (val == 0)
  {
    printf("wrong input");
    return 0;
  }

  printf("2^n is %d", val);
}

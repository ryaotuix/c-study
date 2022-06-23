#include <stdio.h>

int factorial(int i)
{
  int result;
  result = (i == 0 || i == 1) ? 1 : i*factorial(i-1);
  return result;
}

int main(void)
{
  int i;
  printf("Type number\n");
  scanf("%d", &i);
  printf("%d! is %d", i, factorial(i));
  return 0;
}

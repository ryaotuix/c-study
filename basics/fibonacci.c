#include <stdio.h>

int fibonacci(int i)
{
  if (i == 0)
    return 0;
  else if (i == 1)
    return 1;
  else
    return (fibonacci(i-1) + fibonacci(i-2));
}

int main(void)
{
  int fib;
  printf("How many fibonacci numbers do you want?\n");
  scanf("%d", &fib);

  if (fib==0)
  {
    printf("No number.\n");
    return 0;
  }

  for (int i = 0; i < fib; i++) // it starts from 0, so < max fib
  {
    if (i!=0)
      printf(", ");

    int result = fibonacci(i);
    printf("%d", result);
  }
}

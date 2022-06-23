/* receive number change to hexadecimal number */
#include <stdio.h>

int main(void)
{
  int i;
  printf("Type an integer\n");
  scanf("%d", &i);
  printf("%d in hexadecimal is %#X", i, i);
}

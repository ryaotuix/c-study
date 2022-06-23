/* ask user two integers and print all 구구단 in between two numbers */

#include <stdio.h>

void dandan(int a, int b)
{
  if (a <= b)
  {
    for (int j = a; j <= b; j++)
    {

      for(int i = 1; i <= 9; i++)
      {
        printf("%d times %d is %d\n", j, i, j*i);
      }

    }
  }
  else
  {
    dandan(b, a);
  }

}

int main(void)
{
  int a, b;
  printf("Type two integers\n");
  scanf("%d %d", &a, &b);
  dandan(a,b);
}

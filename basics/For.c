#include <stdio.h>

// int main(void)
// {
//   int a,b;
//   int sum = 0;
//
//   printf("Enter two integers\n");
//   scanf("%d %d", &a, &b);
//
//   for(a; a < b+1; a++)
//   {
//     printf("We add %d to the sum\n", a);
//     sum += a;
//   }
//
//   printf("The sum is %d", sum);
//   return 0;
// }

/* Calculate Factorial */
// int main(void)
// {
//   int num;
//   int fac = 1;
//
//   printf("Type your number: ");
//   scanf("%d", &num);
//
//   printf("%d factorial is ", num);
//   for(int i = 1; i < num+1; i++)
//   {
//     fac *= i;
//   }
//   printf("%d\n", fac);
//   return 0;
// }

/* 구구단 in for loop */
int main(void)
{

  for(int i = 2; i <= 9; i++)
  {
    printf("%d dan is\n", i);

    for(int j = 1; j <=9; j++)
    {
      printf("%d times %d is %d\n", i, j, i*j);
    }

    printf("\n");
  }

}

#include <stdio.h>

/* Basic if let's get used to syntax */
// int main(void)
// {
//   int option;
//   double a, b;
//
//   printf("What are two numbers?\n");
//   scanf("%lf %lf", &a, &b);
//
//   printf("What do you want to do?\n");
//   printf("1: Add \n2: Subtract \n3: Multiply \n4: Divide\n");
//   scanf("%d", &option);
//
//   if (option == 1)
//     printf("%f + %f = %f", a, b, a+b);
//
//   if (option == 2)
//     printf("%f - %f = %f", a, b, a-b);
//
//   if (option == 3)
//     printf("%f * %f = %f", a, b, a*b);
//
//   if (option == 4)
//     printf("%f / %f = %f", a, b, a/b);
//
//   // Problem : They execute all if statements
// }

/* Task: print all numbers divisible by 3 or 4 from 1 to 100 */
// int main(void)
// {
//
//   for(int i = 1; i <= 100; i++)
//   {
//     if (i%3 == 0 || i%4 == 0)
//     {
//       printf("%d is divisible by 3 or 4\n", i);
//     }
//   }
//
// }


/* IMPORTANT: Syntax */
int main(void)
{
  int num, abs;
  printf("Type an integer: ");
  scanf("%d", &num);

  abs = (num > 0) ? num : num*(-1); // IMPORTANT!!
  printf("Absolute value is %d", abs);
  return 0;
}

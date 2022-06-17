#include <stdio.h>

// int main(void)
// {
//   int sum = 0;
//   do {
//     int i;
//     printf("What integer do you want to add?\n");
//     scanf("%d", &i);
//     sum += i;
//     printf("The current sum is %d\n", sum);
//   } while(sum != 0);
// }

/* Task: add even ints 0 ~ 100 with do while */
int main(void)
{
  int sum = 0;
  int i = 0;

  do {
    sum += i;
    i += 2;
  } while (i < 101);

  printf("THe sum is %d", sum);
  return 0;
}

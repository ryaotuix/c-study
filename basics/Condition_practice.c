#include <stdio.h>

/* Task: Print multiple of 7 and 9 */
// int main(void){
//   for (int i = 1; i <= 100; i++)
//   {
//     if (i%7 == 0 && i%9 ==0)
//       printf("%d is divisible by both 7 and 9\n", i);
//
//     else if(i%7 == 0)
//       printf("%d is divisible by 7\n", i);
//
//     else if(i%9 == 0)
//       printf("%d is divisible by 9\n", i);
//   }
// }

/* Task: Print subtraction of two inputs but greater - smaller */
// int main(void)
// {
//   int a,b;
//   printf("Type two integers: ");
//   scanf("%d %d", &a, &b);
//
//   if (a>b)
//     printf("%d - %d is %d\n", a, b, a-b);
//   else
//     printf("%d - %d is %d\n", b, a, b-a);
// }

/* !!!Task: Use simpler syntax~!!!! */
int main(void)
{
  int a, b;
  printf("Type two integers: ");
  scanf("%d %d", &a, &b);

  int sub = (a>b) ? a-b : b-a;
  printf("Difference is %d", sub);
}


/* Task: letter grade calculator */
// int main(void)
// {
//   int korean, english, math;
//   printf("What is your score respecively? ");
//   scanf("%d %d %d", &korean, &english, &math);
//
//   for (int i = 1; i <= 3; i++)
//   {
//     int sub;
//     if (i == 1) {
//       printf("Your Korean letter grade is ");
//       sub = korean;
//     }
//
//     else if (i == 2) {
//       printf("Your English letter grade is ");
//       sub = english;
//     }
//
//     else if (i == 3) {
//       printf("Your Math letter grade is ");
//       sub = math;
//     }
//
//     if (sub >= 90) {
//       printf("A!\n");
//     }
//     else if(sub >= 80) {
//       printf("B!\n");
//     }
//     else if(sub >= 70) {
//       printf("C!\n");
//     }
//     else if(sub >= 50) {
//       printf("D!\n");
//     }
//     else {
//       printf("F!\n");
//     }
//   }
// }

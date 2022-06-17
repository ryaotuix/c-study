#include <stdio.h>

/* Learning loops in C */

// int main(void){
//   int num = 0;
//   while(num<5){
//     printf("Hello World! %d \n", num);
//     num++;
//   }
//   return 0;
// }

/* Task: 구구단을 거꾸로 */
// int main(void){
//   int dan;
//   int num = 9;
//
//   printf("What dan?");
//   scanf("%d", &dan);
//
//   while(num>0){
//     printf("%d times %d is %d\n", dan, num, dan*num);
//     num--;
//   }


/* Task: Get average */
// int main(void)
//   {
//     int numint;
//     int i = 0;
//     int sum = 0;
//
//     printf("How many integers will you type?\n");
//     scanf("%d", &numint);
//
//     while(i < numint){
//       int add = 0;
//       printf("What is your %d integer?\n", i+1);
//       scanf("%d", &add);
//       sum += add;
//       i++;
//     }
//
//     printf("The average is %f", (float)sum/numint);
//     return 0;
//   }

/* Task: 구구단 */
// int main(void){
//   int dan = 2;
//   while (dan < 10){
//       int i = 1;
//       while (i < 10) {
//         printf("%d times %d is %d\n", dan, i, dan*i);
//         i++;
//       }
//       dan++;
//   }
// }

/* Task: Only use While to receive 5 positive integers and get the sum */
// int main(void){
//   int i = 0, sum = 0;
//
//   while (i < 5)
//   {
//     int input = -1;
//     printf("What is your %d number?\n", i+1);
//
//     while(input < 0)
//     {
//       printf("Please enter positive integer\n");
//       scanf("%d", &input);
//     }
//
//     sum += input;
//     i++;
//   }
//
//   printf("Sum is %d", sum);
//
//   return 0;
// }


/* Task: print this out

*
0 *
0 0 *
0 0 0 *
0 0 0 0 *

*/

int main(void)
{
  int i = 0;
  while(i<5)
  {
    int j = 0;

    while (i > j)
    {
      printf("o ");
      j++;
    }
    printf("*\n");
    i++;
  }
}
